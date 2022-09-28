#include <stdio.h>
#define ANS_MOD 1000000000

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);

	int arr[n + 1][k + 1];
	for (int i = 1; i <= n; i ++) {
		for (int ii = 1; ii <= k; ii ++) {
			if (ii == 1)
				arr[i][ii] = 1;
			else if (i == 1)
				arr[i][ii] = ii;
			else
				arr[i][ii] = (arr[i - 1][ii] + arr[i][ii - 1]) % ANS_MOD;
		}
	}
	printf("%d", arr[n][k]);
}