#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d", &a, &b);

	printf("%d", (b + (b - a)));
}