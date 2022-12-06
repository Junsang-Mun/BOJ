#include <stdio.h>

int main(void) {
	int n, tmp, beated = 0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i ++) {
		scanf("%d", &tmp);
		if (tmp != i)
			beated ++;
	}
	printf("%d", beated);
}