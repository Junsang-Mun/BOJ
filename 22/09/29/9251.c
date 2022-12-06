#include <stdio.h>
#include <string.h>

/** a와 b를 받아 더 큰 값을 리턴해주는 함수. 동일한 값이라면 a 값을 리턴한다. */
int choice(int a, int b) {
	return (a >= b ? a : b);
}

int main(void) {
	char a[1001] = {0, }, b[1001] = {0, };
	int a_len, b_len;

	scanf("%s", a);
	scanf("%s", b);
	a_len = strlen(a);
	b_len = strlen(b);
	int dp[a_len + 1][b_len + 1];
	for (int i = 0; i <= b_len; i ++)
		dp[0][i] = 0;
	for (int i = 0; i <= a_len; i ++)
		dp[i][0] = 0;
	for (int i = 1; i <= a_len; i ++) {
		for (int ii = 1; ii <= b_len; ii ++) {
			if (a[i - 1] != b[ii - 1]) {
				dp[i][ii] = choice(dp[i - 1][ii], dp[i][ii - 1]);
			} else {
				dp[i][ii] = dp[i - 1][ii - 1] + 1;
			}
		}
	}
	printf("%d", dp[a_len][b_len]);
}