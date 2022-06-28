#include <stdio.h>

int main(void) {
    int i, wc = 0;
    char ch[1000000];

    scanf("%s", ch);
    if (ch[0] == ' ')
        i = 1;
    else
        i = 0;

    while (ch[i + 1] != 0) {
        if (ch[i] == ' ') {
            ++ wc;
        }
        ++ i;
    }
    printf("%d", wc);
}