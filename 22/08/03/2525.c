#include <stdio.h>

int main(void) {
	int rh, rm, est;

	scanf("%d %d", &rh, &rm);
	scanf("%d", &est);

	rh += est / 60;
	rm += est % 60;

	while (rh >= 24 || rm >= 60) {
		if (rh >= 24)
			rh -= 24;
		if (rm >= 60) {
			rh ++;
			rm -= 60;
		}
	}

	printf("%d %d", rh, rm);
}
