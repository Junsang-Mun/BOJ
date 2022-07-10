#include <stdio.h>

int main(void) {
    int caseNum, i = 0;
    char arr[80];

    scanf("%d", &caseNum);
    while (caseNum > i) {
        int ii = 0, output = 0, strike = 1;
        scanf("%s", arr);
        while (arr[ii] != 0) {
            if (arr[ii] == 'O') {
                output += strike ++;
            } else {
                strike = 1;
            }
            ii ++;
        }
        printf("%d\n", output);
        i ++;
    }
}