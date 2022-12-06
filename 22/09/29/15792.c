#include <stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d.", a / b);
	int i = 0;
	a = a % b;
	while (i <= 1000) {
		a *= 10;
		printf("%d", a / b);
		a = a - (a / b) * b;
		i ++;
	}
}