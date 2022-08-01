#include <stdio.h>

int main(void) {
	int month, day, md = 0;
	int monthArray[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char *dayArray[8] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

	scanf("%d %d", &month, &day);
	for (int i = 0; i < month - 1; i ++) {
		md += monthArray[i];
	}
	day += md;
	md = day % 7 - 1;
	printf("%s", dayArray[md]);
}
