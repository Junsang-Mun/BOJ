#include <stdio.h>

int main(void) {
    int caseNum, i = 0, ii = 0, output = 0;
    int arr[80] = {0, };

    scanf("%d", &caseNum);
    while (caseNum > i) {
        scanf("%c", arr);
        while (arr[ii]) {
            if (arr[ii] == 'O')
                output ++;
            ii ++;
        }
        printf("%d\n", output);
        output = 0;
        i ++;
    }
}