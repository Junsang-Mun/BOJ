#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i ++) {
        for (int ii = 1; ii <= i; ii ++) {
            printf("*");
        }
        printf("\n");
    }
}