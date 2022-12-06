#include <stdio.h>

int main(void) {
	int aa, a, i = 0, r = 0;
	scanf("%d", &aa);

	for(; i < aa; i ++) {
		scanf("%d", &a);
		r += a;
	}
	printf("%d\n%d", i, r);
}
