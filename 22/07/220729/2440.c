#include <stdio.h>

void p(char c, int n) {
    for (int i = 0; i < n; i ++) {
        printf("%c", c);
    }
    printf("\n");
}

int main(void) {
    int n;

    scanf("%d", &n);
    for (int i = n; i > 0; i --) {
        p('*', i);
    }
}