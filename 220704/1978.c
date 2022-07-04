#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n == 1) { return 0; }
    for (int ii = 2; ii != sqrt((long)n); ii ++) {
        if (n % ii == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int arrlen;
    int tmp;
    int primeCount = 0;
    int i = 0;

    scanf("%d", &arrlen);
    while (1) {
        scanf("%d", &tmp);
        primeCount += isPrime(tmp);
        i ++;
        if (i > arrlen) {
            break;
        }
    }
    printf("%d", primeCount);
}