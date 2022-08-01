#include <stdio.h>

int c(int n) {
	int a = (n / 10) + (n % 10 * 10);
	return n;
}

int main(void) {
	int num, changed, i = 0;

	scanf("%d", &num);
	do {
	changed = c(num);
	i ++;
	} while (changed == num);
	printf("%d", i);
}
