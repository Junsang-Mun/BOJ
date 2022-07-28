#include <stdio.h>

int main(void) {
    int a, r = 0;
    
    scanf("%d", &a);
    while (a) {
        r += a;
        a --;
    }
    printf("%d", r);
}