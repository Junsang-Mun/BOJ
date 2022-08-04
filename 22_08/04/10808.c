#include <stdio.h>

int main(void) {
	char a;
	int b[27] = {0, };
	while (scanf("%s", &a) != EOF) {
		b[(int)a - 97] += 1;
	}
	for (int i = 0; i < 26; i ++)
		printf("%d ", b[i]);
	printf("%d", b[26]);
}
