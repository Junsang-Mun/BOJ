#include <stdio.h>

/** char형 변수를 입력받아 변수가 aeiou인지 검사함 */
int match(char c) {
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
		|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return (1);
	return (0);
}

int main(void) {
	char c;
	int count = 0;

	while (1) {
		scanf("%c", &c);
		if (c == '#')
			break;
		else if (c == '\n') {
			printf("%d\n", count);
			count = 0;
		}
		else if (match(c))
			count ++;
	}
}