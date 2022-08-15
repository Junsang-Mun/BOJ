#include <stdio.h>

int mfind(int a, int b, int c) {
	int max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;
	return max;
}

int main(void) {
	int a, b, c, i, ii;

	scanf("%d %d %d", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0)
		return 0;

	int max = mfind(a, b, c);

	if (max == a) {
		i = b;
		ii = c;
	} else if (max == c) {
		i = a;
		ii = b;
	} else {
		i = a;
		ii = c;
	}

	if (ii*ii + i*i == max*max)
		printf("right");
	else
		printf("wrong");
}
