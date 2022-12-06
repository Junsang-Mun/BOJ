#include <stdio.h>
#define N_MAX 1000000000

int main(void) {
	int n, i = 0;
	scanf("%d", &n);
	int arr[n];

	while(i < n) {
		scanf("%d", &arr[i]);
		i ++;
	}

	int min = N_MAX, max = 0;
	for (int i = 0; i < n; i ++) {
		if (arr[i] < min)
			min = arr[i];
		if (i != 0 && arr[i - 1] > arr[i])
			continue;
		if (arr[i] - min > max) {
			max = arr[i] - min;
		}
	}
	printf("%d", max);
}