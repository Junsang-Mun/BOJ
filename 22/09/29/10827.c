#include <stdio.h>
#include <math.h>
#include <unistd.h>

char areyouserious[10001] = {0, };
int nowyouseeme = 0;

void __PUTCHAR(char c) {
	areyouserious[nowyouseeme] = c;
}

void __PDIGIT(int n) {
	if (n < 10) {
		__PUTCHAR(n + '0');
		nowyouseeme ++;
	} else {
		__PDIGIT(n / 10);
		__PDIGIT(n % 10);
		nowyouseeme ++;
	}
}

void lfprint(long double n) {
	__PDIGIT((int)n);
	__PUTCHAR('.');
	//nowyouseeme ++;
	int TO_REMOVE = (int)n;
	n = n - TO_REMOVE;
	for (int i = 0; i < 1000; i ++) {
		n *= 10;
		TO_REMOVE = (int)n;
		__PUTCHAR((int)n + '0');
		n = n - TO_REMOVE;
		nowyouseeme ++;
	}
}

int main(void) {
	long double a, b, res;

	scanf("%Lf %Lf", &a, &b);
	res = powl(a, b);
	lfprint(res);
	
}