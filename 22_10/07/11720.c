#include <stdio.h>
#include <unistd.h>

int main(void) {
	int n, r = 0;
	char buf[101] = {0, };

	scanf("%d", &n);
	scanf("%s", buf);
	for (int i = 0; i < n; i ++) {
		r += (int)buf[i] - '0';
	}
	printf("%d", r);
}