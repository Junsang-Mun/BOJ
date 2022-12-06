#include <stdio.h>

void case_a(int a, int b, int c);
void case_b(int a, int b, int c);
void case_c(int a, int b, int c);

int main(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a == b == c) {
		printf("0");
		return 0;
	} else if (a >= b && a >= c) {
		case_a(a, b, c);
	} else if (b >= a && b >= c) {
		case_b(a, b, c);
	} else if (c >= a && c >= b) {
		case_c(a, b, c);
	}
	return 0;
}

void case_a(int a, int b, int c) {
	printf("%d", (a * 2) - (b + c));
}

void case_b(int a, int b, int c) {
	printf("%d", (b * 2) - (a + c));
}

void case_c(int a, int b, int c) {
	printf("%d", (c * 2) - (b + a));
}