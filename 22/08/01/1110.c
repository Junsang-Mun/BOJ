#include <stdio.h>

int c(int n) {
	int a = (n / 10) + (n % 10);
	int b = (a / 10) + (a % 10);
	int t;
	if ((n / 10) < 1) {
		t = n;
	} else {
		t = n / 10;
	}
	return (a % 10 * 10) + t;
}

int main(void) {
	int num, changed, i = 0;

	scanf("%d", &num);
	while (1) {
		i ++;
		changed = c(num);
		if (changed == num) {
			break;
		}
	}
	printf("%d", i);
}
