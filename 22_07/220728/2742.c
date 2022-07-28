#include <stdio.h>

int main(void) {
    int a;
    
    scanf("%d", &a);
    while (a) {
        printf("%d\n", a);
        a --;
    }
}