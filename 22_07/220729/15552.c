#include <stdio.h>

int main(void) {
    int n, i = 0, a, b;
    
    scanf("%d", &n);
    while (i < n) {
        scanf("%d %d", &a, &b);
        printf("%d", a + b);
        n ++;
    }
}