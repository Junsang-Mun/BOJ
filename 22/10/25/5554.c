#include <stdio.h>

int main(void) {
	int total = 0;
	int buf;

	while (scanf("%d", &buf) != EOF) {
		total += buf;
	}
	printf("%d\n%d", total / 60, total % 60);
}