#include <stdio.h>

int main(void) {
	int 크, 냐;

	while (1) {
		scanf("%d %d", &크, &냐);
		if (크 == 0 && 냐 == 0)
			return 0;
		if (크 > 냐) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
}