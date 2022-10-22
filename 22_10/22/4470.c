#include <stdio.h>

int main(void) {
	int n;
	char buf[51];

	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		fflush(stdin);
		fgets(buf, 50, stdin);
		printf("%d. %s\n", i + 1, buf);
	}
}