#include <stdio.h>

int main(void) {
    char arr[1000001];
    int displayed[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i = 0;
    int large = 0;
    int match = 0;

    while (scanf("%1s", &arr[i]) != EOF) {
        if (arr[i] > 96)
            arr[i] -= 32;
        arr[i] -= 64;
        i ++;
    }
    i = 0;
    while (arr[i] != 0) {
        displayed[(int)arr[i] - 1] ++;
        i ++;
    }
    i = 0;
    while (i < 26) {
        if (displayed[i] > large) {
            large = displayed[i];
            match = i + 65;
        } else if (displayed[i] == large) {
            match = '?';
        }
        i ++;
    }
    printf("%c", (char)match);
}