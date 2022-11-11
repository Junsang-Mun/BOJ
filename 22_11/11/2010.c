#include <stdio.h>

int main(void) {
	int n, buf, total = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &buf);
		total += buf;
	}
	printf("%d", total - (n - 1));
}