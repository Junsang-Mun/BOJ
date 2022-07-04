#include <stdio.h>

int factorial(int num) {
    long result = 1;
    for (int i = 1; i <= num; i ++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int testcase, westSite, eastSite, i = 0;

    scanf("%d", &testcase);
    //while (i <= testcase) {
        scanf("%d %d", &westSite, &eastSite);
        printf("%d", factorial(eastSite) / (factorial(westSite) * factorial(eastSite - westSite)));
        i ++;
    //}
    return 0;
}