#include <stdio.h>
#include <unistd.h>

int main(void) {
	char set[501];
	char buf = 0;

	while (1) {
		int i = 0;
		while (buf != '\n') {
			read(1, &buf, 1);
			set[i] = buf;
			i ++;
		}
		i --;
		if (set[0] == 'E' && set[1] == 'N' && set[2] == 'D') {
			return 0;
		}
		while (i >= 0) {
			write(1, &set[i], 1);
			i --;
		}
		printf("\n");
	}
		//DEBUG: printf("%s", set);
}