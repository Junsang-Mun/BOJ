#include <stdio.h>
#define SPACE 6

int main(void) {
    int inputNum, prevNum = 0, nextNum = 1, multi = 0;

    scanf("%d", &inputNum);
    while (prevNum < inputNum && inputNum > nextNum) {
        prevNum = nextNum;
        nextNum = nextNum + (SPACE * multi);
        multi ++;
    }
    if (multi == 0) {
        printf("%d", 1);
        return 0;
    }
    printf("%d", multi);
}