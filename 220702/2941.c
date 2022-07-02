#include <stdio.h>

int main(void) {
    char input[101];
    int i = 0;
    int alpha = 0;

    scanf("%s", input);
    while (input[i] != 0) {
        if (input[i] == '='){
            if (input[i - 1] == 'c') {
                i ++;
            } else if (input[i - 1] == 'z' && input[i - 2] == 'd') {
                i ++;
                alpha -= 2;
            } else if (input[i - 1] == 'z') {
                i ++;
            } else if (input[i - 1] == 's') {
                i ++;
            }
        } else if (input[i] == '-') {
            if (input[i - 1] == 'c') {
                i ++;
            } else if (input[i - 1] == 'd') {
                i ++;
            }
        } else if (input[i] == 'j') {
            if (input[i - 1] == 'l') {
                i ++;
            } else if (input[i - 1] == 'n') {
                i ++;
            }            
        }
        i ++;
        alpha ++;
    }
    printf("%d", alpha);
}