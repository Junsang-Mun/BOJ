#include <stdio.h>

int main(void) {
	char a[101] ={0, };
	int b[27] = {0, };
	scanf("%s", a);
	for (int i = 0; i < 101; i ++) {
		b[(int)a[i] - 97] += 1;
	}
	for (int i = 0; i < 25; i ++)
		printf("%d ", b[i]);
	printf("%d", b[25]);
}
