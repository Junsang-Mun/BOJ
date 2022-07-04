#include <stdio.h>

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i ++) {
        result *= i;
    }
    return result;
}

int main(void) {
    printf("%d", factorial(6));
}