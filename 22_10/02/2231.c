#include <stdio.h>

int addDigits(int n) {
	int r = 0;
	while (n > 0) {
		r += n % 10;
		n /= 10;
	}
	return r;
}

int getDigits(int n) {
	int i = 0;
	while (n > 0) {
		n /= 10;
		i ++;
	}
	return i;
}

int main(void) {
	int n, dgit, from;

	scanf("%d", &n);
	dgit = getDigits(n);
	from = n - (dgit * 9);
	while (from <= n) {
		dgit = from + addDigits(from);
		if (dgit == n) {
			printf("%d", from);
			return 0;
		}
		from ++;
	}
	printf("0");
	return 0;
}