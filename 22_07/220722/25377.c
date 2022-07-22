#include <stdio.h>

int main(void) {
    int tcn, bread, run, i = 0, min = -1;

    scanf("%d", &tcn);
    while (i < tcn) {
        scanf("%d %d", &bread, &run);
        if (bread == 0 && run == 0) {
            printf("0");
            return 0;
        }
        if (bread <= run) {
            if (min > bread - run)
                min = bread - run;
        }
        i ++;
    }
    printf("%d", min);
    return 0;
}