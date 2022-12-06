#include <stdio.h>

int main(void) {
	char str[101];
	char rot13[26] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	for (int i = 0; i < 101; i ++) {
		str[i] = 0;
	}
	scanf("%[^\n]", str);
	int i = 0;
	while (str[i]) {
		if ('a' <= str[i] && str[i] <= 'z') {
			str[i] = rot13[(int)str[i] - 'a'];
		} else if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] = rot13[(int)str[i] - 'A'] - 32;
		}
		i ++;
	}
	printf("%s", str);
}