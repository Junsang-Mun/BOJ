#include <stdio.h>

void quick_sort(long long *data, long long start, long long end){
    long long pivot = start;
    long long i = pivot + 1;
    long long j = end;
    long long temp;

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
    long long arrlen, i = 0, count = 1, maxi = 0, flag;

    scanf("%lld", &arrlen);
    long long arr[arrlen];

    for (long long a = 0; a < arrlen; a ++) {
        scanf("%lld", &arr[a]);
        i ++;
    }
    i = 0;
    quick_sort(arr, 0, arrlen - 1);
    while (arr[i] != 0) {
        if (arr[i] == arr[i + 1]) {
            count ++;
            if (count > maxi) {
                maxi = count;
                flag = i;
            }
        } else {
            count = 1;
        }
        i ++;
    }
    printf("%lld", arr[flag]);
    return 0;
}