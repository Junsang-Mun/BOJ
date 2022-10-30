#include <stdio.h>

int main(void) {
	int buf, sum = 0;

	while (1) {
		scanf("%d", &buf);
		if (buf == -1)
			break ;
		sum += buf;
	}
	printf("%d", sum);
}