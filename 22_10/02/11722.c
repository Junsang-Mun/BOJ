#include <stdio.h>

int main(void) {
	int n, buf, res = 0;
	scanf("%d", &n);
	int arr[2][n];
	for (int i = 0; i < n; i ++) {
		scanf("%d", &arr[0][i]);
		arr[1][i] = 1;
	}
	int prev_max[2] = {arr[0][0], 1};
	for (int i = 0; i < n; i ++) {
		for (int ii = i; ii >= 0; ii --) {
			if (arr[0][ii] > arr[0][i] && arr[1][ii] >= arr[1][i])
				arr[1][i] = arr[1][ii] + 1;
		}
	}
	for (int i = 0; i < n; i ++) {
		if (res < arr[1][i])
			res = arr[1][i];
	}
	printf("%d", res);
}