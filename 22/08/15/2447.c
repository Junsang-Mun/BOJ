#include <stdio.h>

int return_n(int num);

int main(void) {
	int num;

	scanf("%d", &num);
	printf("%d", return_n(num));


}

int return_n(int num) {
	int i = 0;

	while (num > 2) {
		num = num/ 3;
		i ++;
	}
	return i;
}

