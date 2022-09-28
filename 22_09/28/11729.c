#include <stdio.h>
#include <math.h>

void cat(int start, int end) {
	printf("%d %d\n", start, end);
}

void yaho(int n, int start, int end) {
	if (n == 1) {
		cat(start, end);
		return ;
	}
	yaho(n - 1, start, 6 - start - end);
	cat(start, end);
	yaho(n - 1, 6 - start - end, end);
}


int main(void) {
	int stack;

	scanf("%d", &stack);
	printf("%d\n", (int)pow((double)2, (double)stack) - 1);
	yaho(stack, 1, 3);
}