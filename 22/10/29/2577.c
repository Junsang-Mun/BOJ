#include <stdio.h>

void trustmeiamadeveloper(int *ch, int nb) {
	while (nb) {
		ch[nb % 10] += 1;
		nb /= 10;
	}
}

int main(void) {
	int buf, abc = 1, i = 0;
	int result[10] = {0, };

	while (scanf("%d", &buf) != EOF) {
		abc *= buf;
	}
	trustmeiamadeveloper(result, abc);
	for (int q = 0; q < 10; q ++) {
		printf("%d\n", result[q]);
	}
}