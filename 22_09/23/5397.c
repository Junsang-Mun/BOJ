#include <stdio.h>
#include <string.h>


/** 변수 result 날려버리는거 */
void str_boom(char *result, int i) {
    result[i] = 0;
}

/** 변수 result에 넣어주는거 */
void str_join(char *result, int i, char c) {
    result[i] = c;
}

int main(void) {
    int tc;

    scanf("%d", &tc);
    for (int i = 0; i < tc; i ++) {
        char result[1000001] = {0, };
        char ch[1000001] = {0, };
        scanf("%s", ch);
        int ch_len = strlen(ch);
        int idx = 0;
        int idx_tmp = 0;
        while (ch[idx]) {
            switch(ch[idx]) {
                case '<': if (idx_tmp > 0) {
                    idx_tmp --;
                    break;
                }
                case '>': if (idx_tmp < ch_len) {
                    idx_tmp ++;
                    break;
                }
                case '-': {
                    str_boom(result, idx_tmp);
                    break;
                }
                default: {
                    str_join(result, idx_tmp, ch[idx]);
                    idx_tmp ++;
                    break;
                }
            }
            idx ++;
        }
        printf("%s", result);
    }
}