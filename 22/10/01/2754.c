#include <stdio.h>

int main(void) {
	char str[3];
	float result;

	scanf("%s", str);
	switch (str[0]) {
		case 'A':
			result = 4.0;
			break;
		case 'B':
			result = 3.0;
			break;
		case 'C':
			result = 2.0;
			break;
		case 'D':
			result = 1.0;
			break;
		default:
			result = 0;
			break;
	}
	switch (str[1]) {
		case '+':
			result += 0.3;
			break;
		case '-':
			result -= 0.3;
			break;
	}
	printf("%.1f", result);
}