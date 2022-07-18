#include <stdio.h>
#include <math.h>

int main(void) {
    int n_case, x, y, res;

    scanf("%d", &n_case);
    for (int i = 0; i < n_case; i ++) {
        scanf("%d %d", &x, &y);
        res = (int)pow((double) x, (double) y);
        printf("%d", res % 10);
    }
}