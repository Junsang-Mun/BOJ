#include <stdio.h>

int max(int a, int b, int c) {
	if (a > b && a > c) {
		return a;
	}
	if (b > c && b > a) {
		return b;
	}
	if (c > a && c > b) {
		return c;
	}
}

int min(int a, int b, int c) {
		if (a < b && a < c) {
		return a;
	}
	if (b < c && b < a) {
		return b;
	}
	if (c < a && c < b) {
		return c;
	}
}

int mid(int a, int b, int c) {
	int maxi = max(a, b, c);
	int mini = min(a, b, c);

	if (maxi == a && mini == b) {
		return c;
	}
	if (maxi == a && mini == c) {
		return b;
	}
	if (maxi == b && mini == a) {
		return c;
	}
	if (maxi == b && mini == c) {
		return a;
	}
	if (maxi == c && mini == a) {
		return b;
	}
	if (maxi == c && mini == b) {
		return a;
	}
}

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d", min(a, b, c), mid(a, b, c), max(a, b, c));
}