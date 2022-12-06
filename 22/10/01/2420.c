#include <stdio.h>

long long abs(long long a) {
	return (a > 0 ? a : a * -1);
}

int main(void) {
	long long a, b, res;

	scanf("%lld %lld", &a, &b);
	res = a - b;
	printf("%lld", abs(res));
}