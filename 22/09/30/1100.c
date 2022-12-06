#include <stdio.h>

/** char형 변수를 받아 F인지 검사함. F라면 1, 기타의 경우 0을 리턴 */
int filled(char c) {
	if (c == 'F')
		return (1);
	return (0);
}

int main(void) {
	char map[9] = {0, };
	int result = 0;

	for (int i = 0; i <= 3; i ++) {
		scanf("%s", map);
		if (filled(map[0]))
			result ++;
		if (filled(map[2]))
			result ++;
		if (filled(map[4]))
			result ++;
		if (filled(map[6]))
			result ++;
		scanf("%s", map);
		if (filled(map[1]))
			result ++;
		if (filled(map[3]))
			result ++;
		if (filled(map[5]))
			result ++;
		if (filled(map[7]))
			result ++;
	}
	printf("%d", result);
}