#include <stdio.h>

int rev(int n) {
    int a = 0;

    a += n % 10 * 100;
    n /= 10;
    a += n % 10 * 10;
    n /= 10;
    a += n % 10;
    n /= 10;
    return a;
}

int main(void) {
    int a, b;

    scanf("%d %d", &a, &b);
    a = rev(a);
    b = rev(b);
    if (a > b) {
        printf("%d", a);
        return 0;
    }
    printf("%d", b);
    return 0;
}