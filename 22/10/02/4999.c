#include <stdio.h>

int main(void) {
	int available = 0, instruction = 0;
	char buf;

	while (1) {
		scanf("%c", &buf);
		available ++;
		if (buf == 'h')
			break;
	}
	while (1) {
		scanf("%c", &buf);
		instruction ++;
		if (buf == 'h')
			break;
	}
	instruction --;
	if (available == instruction) {
		printf("go");
	} else if (available < instruction) {
		printf("no");
	} else {
		printf("go");
	}
	return 0;
}