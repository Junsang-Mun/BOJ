#include <stdio.h>

int main(void) {
    int n, i = 0, a, b;
    
    scanf("%d", &n);
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d", a + b);
    }
}