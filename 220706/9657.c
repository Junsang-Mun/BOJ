#include <stdio.h>

int main(void) {
    int n;
    int i = 6;
    int dp[1001] = {0, 1, 0, 1, 1, 1};
    
    scanf("%d", &n);
    while (i <= n) {
        dp[i] = 0;
        if (dp[i - 1] == 0 || dp[i - 3] == 0 || dp[i - 4] == 0)
            dp[i] = 1;
        i ++;
    }

    if (dp[n] == 1)
        printf("SK");
    else
        printf("CY");
    return 0;
}