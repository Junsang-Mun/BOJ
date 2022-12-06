#include <stdio.h>

int main(void) {
	int target_n, search_n;

	scanf("%d", &target_n);
	int target_array[target_n];
	for (int i = 0; i < target_n; i ++)
		scanf("%d", &target_array[i]);
	scanf("%d", &search_n);
	int search_array[search_n];
	for (int i = 0; i < search_n; i ++)
		scanf("%d", &search_array[i]);
	for (int i = 0; i < search_n; i ++) {
		for (int ii = 0; ii < target_n; ii ++) {
			if (search_array[i] == target_array[ii]) {
				printf("1\n");
				break ;
			}
			if (ii == target_n - 1) {
				printf("0\n");
				break;
			}
		}
	}
}
