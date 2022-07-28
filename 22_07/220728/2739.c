#include <stdio.h>

int main(void) {
    int n, i = 2;

    scanf("%d", &n);
    while(i < 10) {
        printf("%d * %d = %d", n, i, n * i);
        i ++;
    }
}