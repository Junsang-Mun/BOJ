#include <stdio.h>

int main(void) {
	int n, k, popped = 0;
	scanf("%d %d", &n, &k);
	int arr_idx = k - 1;
	int array[n], josephus[n];

	for (int i = 0; i < n; i ++) {
		array[i] = i + 1;
		josephus[i] = -1;
	}
	while (popped != n) {
		if (array[arr_idx] != -1) {
			josephus[popped] = array[arr_idx];
			array[arr_idx] = -1;
			popped += 1;
		}
		arr_idx += k;
		for (int i = 0; i < k; i ++) {
			arr_idx += 1;
			if (array[arr_idx] == -1) {
				arr_idx += 1;
			}
		}
		if (arr_idx > n - 1) {
			arr_idx -= n;
		}
	}
	printf("<");
	for(int i = 0; i < n - 1; i ++) {
		printf("%d, ", josephus[i]);
	}
	printf("%d>", josephus[n - 1]);
}