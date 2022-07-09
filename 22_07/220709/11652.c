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
    int arrlen, i = 0, count = 1, maxi = 0;

    scanf("%d", &arrlen);
    int arr[arrlen];

    for (int a = 0; a < arrlen; a ++) {
        scanf("%d", &arrlen);
        i ++;
    }
    i = 0;
    quick_sort(arr, 0, arrlen - 1);
    while (arr[i] != 0) {
        if (arr[i] == arr[i + 1]) {
            count ++;
            if (count > maxi) {
                maxi = count;
            }
        } else {
            count = 1;
        }
        i ++;
    }
    printf("%d", maxi);
    return 0;
}