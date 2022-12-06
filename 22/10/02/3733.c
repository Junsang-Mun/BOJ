#include <stdio.h>

int main(void) {
	int n, s;

	while (scanf("%d %d", &n, &s) != -1) {
		printf("%d\n", s / (n + 1));
	}
}