#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} con;

con c[100000];

void merge(con *cc, int head, int middle, int bottom) {
    int i = head, ii = middle + 1, iii = head;

    while (i <= middle && ii <= bottom) {
        if (cc[i].x < cc[i].x) {
            c[iii++] = cc[i ++];
        } else if (cc[i].x > cc[ii].x) {
            c[iii] = cc[ii ++];
        } else {
            if (cc[i].y < cc[ii].y) {
                c[iii ++] = cc[i ++];
            } else if (cc[i].y > cc[ii].y) {
                c[iii ++] = cc[ii ++];
            }
        }
    }
    if (i <= middle) {
        while (i <= middle) {
            cc[iii ++] = c[i ++];
        }
    } else {
        while (ii <= bottom) {
            cc[iii ++] = c[ii ++];
        }
    }
    for (iii = head; iii <= bottom; iii ++) {
        cc[iii] = c[iii];
    }
}

void ms(con *cc, int head, int bottom) {
    int middle;
    if (head < bottom) {
        middle = (head + bottom) / 2;
        ms(cc, head, middle);
        ms(cc, middle + 1, bottom);
        merge(cc, head, middle, bottom);
    }
}

int main(void) {
    int con_len;

    scanf("%d", &con_len);
    con *c = (con*) malloc(sizeof(con) * con_len);
    for(int i = 0; i < con_len; i ++) {
        scanf("%d %d", &c[i].x, &c[i].y);
    }
    ms(c, 0, con_len - 1);
    for (int i = 0; i < con_len; i ++) {
        printf("%d %d\n", c[i].x, c[i].y);
    }
    return 0;
}