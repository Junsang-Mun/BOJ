#include <stdio.h>

int main(void) {
    int d;
    char ch[101] = {0, };
    int idx = 0;

    scanf("%d", &d);
    for (int i = 0; i < d; i ++) {
        ch[0] = 0;
        scanf("%s", ch);
        idx = 0;
        while (ch[idx] == 'U' && ch[idx] == 0) {
            idx ++;
        }
        printf("%d", idx);
    }
}