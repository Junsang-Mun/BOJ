#include <stdio.h>

int isPegion(int v) {
    if (v == 9999)
        return 1;
    else
        return 0;
}

int main(void) {
    int tcn, bread, run, i = 0, min = 9999;

    scanf("%d", &tcn);
    while (i < tcn) {
        scanf("%d %d", &run, &bread);
        if (run <= bread) {
            if (min > run)
                min = bread;
        }
        i ++;
    }
    if (isPegion(min))
        min = -1;
    printf("%d", min);
    return 0;
}