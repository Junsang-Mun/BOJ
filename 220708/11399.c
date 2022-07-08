#include <stdio.h>
 
void quick_sort(int *data, int start, int end){
    int pivot = start;
    int i = pivot + 1;
    int j = end;
    int temp;

    if (start >= end){
        return; 
    }
    while (i <= j){
        while (i <= end && data[i] <= data[pivot]){
            i++;
        }
        while (j > start && data[j] >= data[pivot]){
            j--;
        }
        if (i > j){
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        } else{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}
 
int main(void) {
    int people, i = 0, result = 0;

    scanf("%d", &people);
    int waiting[people];
    while (i < people) {
        scanf("%d", &waiting[i]);
        i ++;
    }
    quick_sort(waiting, 0, people - 1);
    i = 0;
    while (i < people) {
        for (int j = 0; j <= i; j ++) {
            result += waiting[i];
        }
        i ++;
    }
    printf("%d", result);
    return 0;
}