#include <stdio.h>

int main(void) {
	int arr[30] = {0, };
	int buf;
	for (int i = 0; i < 28; i ++) {
		scanf("%d", &buf);
		arr[buf - 1] = 1;
	}
	for (int i = 0; i < 30; i ++) {
		if (arr[i] == 0)
			printf("%d\n", i + 1);
	}
}