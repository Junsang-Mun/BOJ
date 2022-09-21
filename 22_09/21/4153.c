#include <stdio.h>

int main(void) {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    while (!(a == 0 && b == 0 && c == 0)) {
        if ((a * a) + (b * b) == (c * c))
            printf("right");
        else
            printf("wrong");
        scanf("%d %d %d", &a, &b, &c);
    }
    return 0;
}