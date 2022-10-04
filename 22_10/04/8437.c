#include <stdio.h>

int main(void) {
	unsigned long long total, more;

	scanf("%lld", &total);
	scanf("%lld", &more);
	printf("%lld\n%lld\n", (total + more) / 2, (total - more) / 2);
}