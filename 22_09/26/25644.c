#include <stdio.h>

int main(void) {
	int curr, next;
	int max = 0, min = __INT_MAX__;
	scanf ("%d", &curr);
	while (scanf("%d", &next) != -1) {
		if (curr < next && max < next)
			max = next;
		if (curr > next && min > next)
			min = next;
		curr = next;
	}
	printf("min: %d | max: %d | max-min: %d", min, max, max-min);
}