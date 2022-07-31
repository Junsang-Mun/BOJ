#include <stdio.h>

int main(void) {
	int n, x, a;
	
	scanf("%d %d", &n, &x);
	while (scanf("%d", &a) != EOF) {
		if (a < x) {
			printf("%d ", a);
		}
	}
}
