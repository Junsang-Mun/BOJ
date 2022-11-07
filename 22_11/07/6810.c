#include <stdio.h>

int main(void) {
	int num = 91;

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	num = num + a + c + (b * 3);
	printf("The 1-3-sum is %d", num);
}