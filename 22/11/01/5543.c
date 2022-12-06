#include <stdio.h>

int min(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	if (b < a && b < c) {
		return b;
	}
	if (c < b && c < a) {
		return c;
	}
	return 0;
}

int main(void) {
	int ba, bb, bc;
	int sa, sb;

	scanf("%d %d %d %d %d", &ba, &bb, &bc, &sa, &sb);
	printf("%d", min(ba, bb, bc) + min(sa, sb, 5000) - 50);
}