#include <stdio.h>

int main(void) {
    int arrlen, tmp, i = 0, ii = 0;
    
    scanf("%d", &arrlen);
    int arr[arrlen];
    while (i < arrlen) {
        scanf("%d", &arr[i]);
        i ++;
    }
    i = 0;
    while (i < arrlen - 1) {
        while (ii < arrlen - i - 1) {
            if (arr[ii] < arr[ii + 1]) {
                tmp = arr[ii];
                arr[ii] = arr[ii + 1];
                arr[ii + 1] = arr[ii];
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