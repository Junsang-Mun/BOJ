#include <stdio.h>
#include <string.h>

int main(void) {
	int n, shock = 0;
	char ch[21];

	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%s", ch);
		if (strcmp(ch, "he") == 0 || strcmp(ch, "she") == 0 || strcmp(ch, "him") == 0 || strcmp(ch, "her") == 0)
			shock ++;
	}
	printf("%d", shock);
}