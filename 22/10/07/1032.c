#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	char ch[51] = {0, };
	char prev[51] = {0, };
	char result[51] = {0, };

	scanf("%d", &n);
	if (n == 1) {
		scanf("%s", ch);
		printf("%s", ch);
	} else {
		for (int i = 0; i < n; i ++) {
			strcpy(prev, ch);
			scanf("%s", ch);
			int k = 0;
			while (ch[k]) {
				if (i == 0) {
				} else if (ch[k] == prev[k] && result[k] != '?') {
					result[k] = ch[k];
				} else {
					result[k] = '?';
				}
				k ++;
			}
		}
	}
	printf("%s", result);
}