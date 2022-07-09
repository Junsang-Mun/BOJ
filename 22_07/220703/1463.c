#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    } else if (a > b) {
        return b;
    }
    return a;
}

int main(void) {
    int value;
    int a[1000001] = {0, };

    scanf("%d", &value);
    a[1] = 0;
    for (int i = 2; i <= value; i ++) {
        a[i] = a[i - 1] + 1;
        if (i % 2 == 0) {
            a[i] = min(a[i], a[i / 2] + 1);
        }
        if (i % 3 == 0) {
            a[i] = min(a[i], a[i / 3] + 1);
        }
    }
    printf("%d", a[value]);
}