#include <stdio.h>

int main(void) {
	int curr, next;
	int max = 0, min = __INT_MAX__;
	scanf ("%d", &curr);
	while (scanf("%d", &next) != -1) {
		if (curr < next)
			max = next;
		else if (curr > next)
			min = next;
		else
			curr = next;
	}
	if (max == 0)
		printf("0");
	else
		printf("%d", max-min);
	return 0;
}