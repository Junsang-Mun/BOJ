#include <stdio.h>

int s_strlen(char *ch) {
	int i = 0;
	while (ch[i])
		i ++;
	return i;
}

void strrev(char *ch) {
	int i;
	int j;
	unsigned char a;
	unsigned len = s_strlen(ch);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = ch[i];
		ch[i] = ch[j];
		ch[j] = a;
	}
}

int main(void) {
	int x, y;
	
	scanf("%d %d", &x, &y);
	if (x == 0 || y == 0) {
		return 0;
	}
	for (int i = 0; i < x; i ++) {
		char buf[y + 1];
		scanf("%s", buf);
		strrev(buf);
		printf("%s\n", buf);
	}
}