#include <stdio.h>

int main(void) {
	int a, b, r = 0;

	scanf("%d", &a);
	while (scanf("%d", &b) != EOF) {
		if (a == b)
			r ++;
	}
	printf("%d", r);
}