#include <stdio.h>

int main(void) {
    int a, b, n, i = 0;

    scanf("%d", &n);
    while (i < n) {
        scanf("%d %d", &a, &b);
        printf("%d", a * b);
        i ++;
    }
}