#include <stdio.h>

int main(void) {
	int arr[100];
	int buf, i = 99;

	for (int a = 0; a < 100; a ++) {
		arr[a] = -1;
	}
	for (int a = 0; a < 9; a ++) {
		scanf("%d", &buf);
		arr[buf] = a;
	}
	while (arr[i] == -1) {
		i --;
	}
	printf("%d\n%d", i, arr[i] + 1);
}