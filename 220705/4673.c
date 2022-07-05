#include <stdio.h>

int selfNumber (int c) {
    int cc = c;
    while (c != 0) {
        cc += c % 10;
        c /= 10;
    }
    return cc;
}

int main (void) {
    printf("%d", selfNumber(39));
}