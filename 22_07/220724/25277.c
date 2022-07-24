#include <stdio.h>

int main (void) {
    int num, i = 0, tlqkf = 0;

    scanf("%d", &num);
    while (i < num) {
        char ch;
        scanf("%s", &ch);
        if (ch == "he" || ch == "she" || ch == "him" || ch == "her")
            tlqkf ++;
        i ++;
    }
    printf("%d", tlqkf);
}