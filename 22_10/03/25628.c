#include <stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	if (a == 1 || a == 0 || b == 0) {
		printf("0");
	} else {
		a /= 2;
		printf("%d", a < b ? a : b);
	}
	return 0;
}