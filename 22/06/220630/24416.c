#include <stdio.h>

int getFibonacci(int f) {
    if (f == 0)
        return 0;
    else if (f <= 1)
        return 1;
    return (getFibonacci(f - 1) + getFibonacci(f - 2));
}

int main(void) {
    int number;

    scanf("%d", &number);
    printf("%d %d", getFibonacci(number), number - 2);
}