#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	char ch[1001] = {0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%s", ch);
		printf("%s\n", (6 <= strlen(ch) && strlen(ch) <= 9) ? "yes" : "no");
	}
}