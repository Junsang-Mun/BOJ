#include <stdio.h>

int main(void) {
    int arrlen, tmp, ii, i = 0;
    
    scanf("%d", &arrlen);
    int arr[arrlen];
    while (i < arrlen) {
        scanf("%d", &arr[i]);
        i ++;
    }
    i = 0;
    while (i < arrlen - 1) {
        ii = 0;
        while (ii < arrlen - i - 1) {
            if (arr[ii] > arr[ii + 1]) {
                tmp = arr[ii];
                arr[ii] = arr[ii + 1];
                arr[ii + 1] = tmp;
            }
            ii ++;
        }
        i ++;
    }
    i = 0;
    while (i < arrlen) {
        printf("%d\n", arr[i]);
        i ++;
    }
}