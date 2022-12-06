#include <stdio.h>

int main(void) {
    int n, nn, ans = 0;

    scanf("%d", &nn);
    for (int a = 0; a < nn; a ++) {
        int i = 2;

        scanf("%d", &n);
        while (i * i <= n) {
            if (n % i == 0) {
                ans -= 1;
                break;
            }
            i += 1;
        }
        if (n == 1) {
            ans --;
        }
        ans += 1;
    }
    printf("%d", ans);
}