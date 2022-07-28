#include <stdio.h>

int main(void) {
    int yr;

    scanf("%d", &yr);
    if (yr % 4 == 0 && (yr % 100 != 0 || yr % 400 == 0)) {
        printf("1");
    } else {
        printf("0");
    }
}