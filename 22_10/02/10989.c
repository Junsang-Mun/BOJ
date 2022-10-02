#include <stdio.h>

void clear(short *a) {
	for (short i = 0; i < 10000; i ++) {
		a[i] = -1;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	short arr[10000], tmp;
	for(int i = 0; i < n; i ++) {
		scanf("%hd", &tmp);
		arr[tmp - 1] ++;
	}
	for(int i = 0; i < n; i ++) {
		if (arr[i] == -1) {
			continue;
		}
		for (short ii = 1; ii <= arr[i] + 1; ii ++){
			printf("%d\n", i);
		}
	}
}