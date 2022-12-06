#include <stdio.h>

/** int값 a와 b를 받아 a와 b 중 작은 값을 리턴함. */
int min(int a, int b) {
	return (a > b ? b : a);
}

int final(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	} else if (b < a && b < c) {
		return b;
	} else if (c < a && c < b) {
		return c;
	} else if (a == b && a < c) {
		return a;
	} else if (a == c && a < b) {
		return a;
	} else if (b == c && b < a) {
		return b;
	}
	return a;
}

int main(void) {
	int n;
	scanf("%d", &n);
	int dp[n][3];

	for (int i = 0; i < n; i ++) {
		for (int ii = 0; ii < 3; ii ++) {
			scanf("%d", &dp[i][ii]);
	}}
	for (int i = 1; i < n; i ++) {
		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
	}
	printf("%d", final(dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]));
	return 0;
}