#include <stdio.h>

int main(void) {
	long long n, i = 1, r = 0;

	scanf("%lld", &n);
	while (i < n) {
		r += (n + 1) * i;
		i ++;
	}
	printf("%lld", r);
	return 0;
}