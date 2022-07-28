#include <stdio.h>

int main(void) {
    int what;

    scanf("%d", &what);
    if (what == 100)
        printf("A");
    else if (what / 10 == 9)
        printf("A");
    else if (what / 10 == 8)
        printf("B");
    else if (what / 10 == 7)
        printf("C");
    else if (what / 10 == 6)
        printf("D");
    else
        printf("F");
    return (0);
}