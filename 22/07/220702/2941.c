#include <stdio.h>

int main(void) {
    char input[101];
    int i = 0;
    int alpha = 0;

    scanf("%s", input);
    while (input[i] != 0) {
        if (input[i] == '='){
            if (input[i - 1] == 'c') { //c=
                alpha -= 1;
            } else if (input[i - 1] == 'z' && input[i - 2] == 'd') { //dz=
                alpha -= 2;
            } else if (input[i - 1] == 'z') { //z=
                alpha -= 1;
            } else if (input[i - 1] == 's') { //s=
                alpha -= 1;
            }
        } else if (input[i] == '-') {
            if (input[i - 1] == 'c') { //c-
                alpha -= 1;
            } else if (input[i - 1] == 'd') { //d-
                alpha -= 1;
            }
        } else if (input[i] == 'j') {
            if (input[i - 1] == 'l') { //lj
                alpha -= 1;
            } else if (input[i - 1] == 'n') { //nj
                alpha -= 1;
            }            
        }
        i ++;
        alpha ++;
    }
    printf("%d", alpha);
}