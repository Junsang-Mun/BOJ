#include <stdio.h>

int main(void) {
	long long n, buf, r = 0;

	while (scanf("%lld", &n) != EOF) {
		for (int i = 0; i < n; i ++) {
			scanf("%lld", &buf);
			r += buf;
		}
		if (r == 0) {
			printf("0\n");
		} else if (r > 0) {
			printf("+\n");
		} else {
			printf("-\n");
		}
	}
}