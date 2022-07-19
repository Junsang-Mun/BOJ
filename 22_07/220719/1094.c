#include <stdio.h>

int binary(int n) {
	if (n > 1)
		binary(n / 2);
	return n % 2;
}

int main(void) {
	int num, res = 0;

	scanf("%d", &num);
	while (num) {
		if (num % 2 == 1)
			res ++;
		num /= 2;
	}
	printf("%d", res);
}
