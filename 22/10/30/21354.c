#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	a *= 7;
	b *= 13;
	if (a == b) {
		printf("lika");
	} else {
		printf("%s", a > b ? "Axel" : "Petra");
	}
}