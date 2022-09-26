#include <stdio.h>

int main(void) {
	int a, max = 0, min = __INT_MAX__;
	scanf("%d", &a);
	while (scanf("%d", &a) != EOF) {
		if (max < a)
			max = a;
		if (min > a)
			min = a;
	}
	printf("%d %d %d",max,min, max - min);
}