#include <stdio.h>

int main(void) {
	int buf, s = 0, t = 0;

	for (int i = 0; i < 4; i ++) {
		scanf("%d", &buf);
		s += buf;
	}
	for (int i = 0; i < 4; i ++) {
		scanf("%d", &buf);
		t += buf;
	}
	printf("%d", s > t ? s : t);
}