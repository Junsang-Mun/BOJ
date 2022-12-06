#include <stdio.h>

int _d(int a, int b) {
	return a / b + ( a % b !=0 );
}

int main(void) {
	int n, min;
	int Y = 0, M = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i ++) {
		scanf("%d", &min);
		Y += (_d(min, 30) * 10);
		M += (_d(min, 60) * 15);
	}
	if (Y < M) {
		printf("Y %d", Y);
	} else if (Y > M) {
		printf("M %d", M);
	} else if (Y == M) {
		printf("Y M %d", Y);
	}
}