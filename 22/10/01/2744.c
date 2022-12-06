#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[101];
	int i = 0;

	scanf("%s", ch);
	while (ch[i]) {
		if ('a' <= ch[i] && ch[i] <= 'z') {
			ch[i] -= 32;
		} else {
			ch[i] += 32;
		}
		i ++;
	}
	printf("%s", ch);
}