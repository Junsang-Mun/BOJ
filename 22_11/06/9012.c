#include <stdio.h>

int main(void) {
    char buf[51];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%s", buf);
        int a = 0, flag = 0;
        while (buf[a]) {
            switch (buf[a]) {
            case '(':
                flag += 1;
                break ;
            case ')' :
                flag -= 1;
                break ;
            }
            a += 1;
            if (flag < 0) {
                flag = -42;
                break ;
            }
        }
        if (flag == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
