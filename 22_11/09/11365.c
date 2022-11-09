#include <unistd.h>

int scan(char *ch) {
	char buf = 0;
	int i = 0;
	while (buf != '\n') {
		read(1, &buf, 1);
		ch[i] = buf;
		i ++;
	}
	return i;
}

int validate(char *ch) {
	if (ch[0] == 'E' && ch[1] == 'N' && ch[2] == 'D') {
		return 1;
	}
	return 0;
}

/**
 * @brief a print function
 * 
 * @param ch a set of characters or a single character pointer
 * @param flag 1: single char, 2: string, 3: reverse string, 4: print newline
 * @param idx starting index when uses with flag 3; else MUST set to -1
 */
void print(char *ch, int flag, int idx) {
	switch (flag) {
	int i = 0;
	case 1:
		write(1, &ch, 1);
		break ;
	case 2:
		while (ch[i]) {
			write(1, &ch[i], 1);
			i ++;
		}
		break ;
	case 3:
		while (idx >= 0) {
			write(1, &ch[idx], 1);
			idx --;
		}
		break ;
	case 4:
		write(1, "\n", 1);
		break ;
	}
}

int main(void) {
	while (1) {
		char set[501];
		int idx = scan(set);
		if (validate(set)) {
			return 0;
		}
		print(set, 3, idx);
		print(0, 4, -1);
	}
}