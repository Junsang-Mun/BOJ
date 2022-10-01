#include <stdio.h>

int sq(int n) {
	return n * n;
}

int main(void) {
	int n, res = 0;

	for (int i = 1; i <= 5; i ++) {
		scanf("%d", &n);
		res += sq(n % 10);
	}
	printf("%d", res % 10);
}