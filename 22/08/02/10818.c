#include <stdio.h>

int main(void) {
	int n, a, min = 1000000, max = -1000000;

	scanf("%d", &n);
	for (int i = 0; i < n; i ++){
		scanf("%d", &a);
		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}
	printf("%d %d", min, max);
}
