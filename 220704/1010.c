#include <stdio.h>

unsigned long long factorial(int num) {
    unsigned long long result = 1;
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
        printf("%llu", factorial(eastSite) / (factorial(westSite) * factorial(eastSite - westSite)));
        i ++;
    //}
    return 0;
}