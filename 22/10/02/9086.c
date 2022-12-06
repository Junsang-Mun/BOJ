#include <stdio.h>

int f_strlen(char *a) {
	int i = 0;
	while (a[i])
		i ++;
	return i;
}

int main(void) {
	int n;
	char s[1001] = {0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%s", s);
		int len = f_strlen(s);
		if (len == 1) {
			printf("%c%c\n", s[0], s[0]);
		} else {
			printf("%c%c\n", s[0], s[len - 1]);
		}
	}
}