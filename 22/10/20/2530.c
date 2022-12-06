#include <stdio.h>

int main(void) {
	int hr, min, sec;
	int time_hr = 0, time_min = 0, time_sec;

	scanf("%d %d %d", &hr, &min, &sec);
	scanf("%d", &time_sec);
	while (time_sec >= 60) {
		time_sec -= 60;
		time_min ++;
	}
	while (time_min >= 60) {
		time_min -= 60;
		time_hr ++;
	}
	//printf("time_: %d %d %d\n", time_hr, time_min, time_sec);
	hr += time_hr;
	min += time_min;
	sec += time_sec;
	//printf("-: %d %d %d\n", hr, min, sec);
	while (sec >= 60) {
		sec -= 60;
		min ++;
	}
	while (min >= 60) {
		min -= 60;
		hr ++;
	}
	printf("total: %d %d %d", hr, min, sec);
}