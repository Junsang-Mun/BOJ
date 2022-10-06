#include <stdio.h>

int main(void) {
	int n, r = 0;

	while (scanf("%d", &n) != EOF) {
		r += n;
	}
	printf("%d", r);
}