#include <stdio.h>

int check(int *a, int *b) {
	for (int i = 0; i < 8; i ++) {
		if (a[i] != b[i])
			return -1;
	}
	return 1;
}

int main(void) {
	int arr[8];
	int asc[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int des[8] = {8, 7, 6, 5, 4, 3, 2, 1};

	for (int i = 0; i < 8; i ++) {
		scanf("%d", &arr[i]);
	}
	if (check(arr, asc) == 1) {
		printf("ascending");
	} else if (check(arr, des) == 1) {
		printf("descending");
	} else {
		printf("mixed");
	}
	return 0;
}