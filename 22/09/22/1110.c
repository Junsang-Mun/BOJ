#include <stdio.h>

int main() {
    int i = 0;
    int a;
    scanf("%d", &a);
    int n = a;
    do {
        n = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		++i;
    } while (n != a);
	printf("%d\n", i);
}