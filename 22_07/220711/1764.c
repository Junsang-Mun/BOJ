#include <stdio.h>

int main(void) {
	int d_len, b_len;
	int dbj = 0;
	int dbj_arr[500001] = {0, };

	scanf("%d %d", d_len, b_len);
	int d[d_len], b[b_len];
	for (int i = 0; i < d_len; i ++) {
		scanf("%s", d[i]);
	}
	for (int i = 0; i < b_len; i ++) {
		scanf("%s", b[i]);
	}
	for (int i = 0; i < d_len; i ++) {
		for (int ii = 0; i < b_len; ii ++) {
			if (b[ii] == d[i]) {
				
}
