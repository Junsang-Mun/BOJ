#include <stdio.h>

int main(void) {
	int map[42];
	int buffer;
	int result = 0;

	for (int i = 0; i < 42; i ++) {
		map[i] = 0;
	}
	while (scanf("%d", &buffer) != EOF) {
		map[buffer % 42] += 1;
	}
	for (int i = 0; i < 42; i ++) {
		if (map[i] != 0) {
			result ++;
		}
	}
	printf("%d", result);
}