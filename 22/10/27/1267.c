#include <stdio.h>

int main(void) {
	int buf, total = 0;
	int y = 0, m = 0;
	scanf("%d", &buf);
	while (scanf("%d", &buf) != EOF) {
		total += buf;
	}
	//printf("%d", total); // -> total 값 잘 나오는지 확인
	printf("y: %d\nm: %d", y, m);
}