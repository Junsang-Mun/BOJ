#include <stdio.h>

int main(void) {
	int k, d, a;

	scanf("%d/%d/%d", &k, &d, &a);
	if (k + a < d || d == 0) {
		printf("hasu");
	} else {
		printf("gosu");
	}
	return 0;
}