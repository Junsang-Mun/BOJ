#include <stdio.h>

int main() {
	int n, r = 0;
	scanf("%d", &n);
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			if (i % 5 == 0)
				r ++;
			if (i % 25 == 0)
				r ++;
			if (i % 125 == 0)
				r ++;
		}
		printf("%d", r);
	} else {
		printf("0");
	}
}
