#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = n - 1; i >= 0; i --) {
		int ttal = i + n;
		int star = i * 2 + 1;
		int spce = ttal - star;
		for (int j = 0; j < spce; j ++) {
			printf(" ");
		}
		for (int j = 0; j < star; j ++) {
			printf("*");
		}
		printf("\n");
	}
}