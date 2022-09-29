#include <unistd.h>

void __PUTCHAR(char c) {
	write(1, &c, 1);
}

void __PDIGIT(int n) {
	if (n < 10) {
		__PUTCHAR(n + '0');
	} else {
		__PDIGIT(n / 10);
		__PDIGIT(n % 10);
	}
}

void fprint(float n) {
	__PDIGIT((int)n);
	__PUTCHAR('.');
	for (int i = 0; i < 9; i ++) {
		n *= 10;
	}
}

int main(void) {
	int a = 0, b = 0, pn = 1;
	float result;
	char tmp = 0, result_array[100001] = {0, };

	while (1) {
		read(0, &tmp, 1);
		if (tmp == ' ') {
			break;
		} else if (tmp == '-') {
			pn *= -1;
		} else {
			a = ((a * 10) + (tmp - '0')) * pn;
		}
	}
	pn = 1;
	while (1) {
		read(0, &tmp, 1);
		if (tmp == '\n' || tmp == -1) {
			break;
		} else if (tmp == '-') {
			pn *= -1;
		} else {
			b = ((b * 10) + (tmp - '0')) * pn;
		}
	}
	result = (float)a / (float)b;
	fprint(result);
	return 0;
}