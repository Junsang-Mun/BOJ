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
	while (1) {
		char buf[501];
		scanf(" %[^\n]", buf);
		if (buf[0] == 'E' && buf[1] == 'N' && buf[2] == 'D') {
			return 0;
		}
		strrev(buf);
		printf("%s\n", buf);
	}
}