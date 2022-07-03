#include <stdio.h>

int main(void) {
    int value, try;

    try = 0;
    scanf("%d", &value);
    while (value != 1) {
        if (value % 3 == 0) {
            value /= 3;
        } else if (value % 2 == 0) {
            value /= 2;
        } else {
            value -= 1;
        }
        try ++;
    }
    printf("%d", try);
}