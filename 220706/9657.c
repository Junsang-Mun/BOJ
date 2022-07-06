#include <stdio.h>

int main(void) {
    int n;
    int i = 6;
    int dp[1001] = {1, 0, 1, 1, 1};
    
    scanf("%d", &n);
    while (i <= n) {
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