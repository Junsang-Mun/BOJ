#include <stdio.h>

void itoa(char *ch, int nb) {
	int i = 10;
	char buf;

	while (nb) {
		ch[i] = (nb % 10) + '0';
		nb /= 10;
		i --;
	}
	while (i) {
		ch[i] = 0;
		i --;
	}
	for (int ii = 0; ii < 5; ii ++) {
		buf = ch[ii];
		ch[ii] = ch[9 - ii];
		ch[9 - ii] = buf;
	}
}

int main(void) {
	int buf, abc = 1, i = 0;
	int result[10] = {0, };
	char c[11];

	while (scanf("%d", &buf) != EOF) {
		abc *= buf;
	}
	//DEBUG
	printf("DEBUG: Value of abc: %d\n", abc);
	itoa(c, abc);
	//DEBUG
	printf("DEBUG: Value of c: %s\n", c);
	while (c[i]) {
		result[(int)c[i] - '0'] += 1;
		i ++;
	}
	for (int q = 0; q < 10; q ++) {
		printf("%d: %d\n", q, result[q]);
	}
}