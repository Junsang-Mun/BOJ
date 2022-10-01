#include <stdio.h>

void clear(int *r) {
	int i = 0;
	while (i < 26) {
		r[i] = -1;
		i ++;
	}
}

int main(void) {
	char c[101] = {0, };
	int r[26];
	int i = 0;

	scanf("%s", c);
	clear(r);
	while (c[i]) {
		if (r[(int)c[i] - 'a'] == -1) {
			r[(int)c[i] - 'a'] = i;
		}
		i ++;
	}
	for (int i = 0; i < 26; i ++) {
		if (i == 25) {
			printf("%d", r[i]);
		} else {
			printf("%d ", r[i]);
		}
	}
}