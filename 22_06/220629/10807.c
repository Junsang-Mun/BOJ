#include <stdio.h>

int main(void) {
    int number;
    int numberArray[101];
    int toFind;
    int found = 0;
    int i;

    i = 0;
    scanf("%d", &number);
    while (i < number) {
        scanf("%d", &numberArray[i]);
        i ++;
    }
    scanf("%d", &toFind);
    i = 0;
    while(i < number){
        if (numberArray[i] == toFind)
            found ++;
        i ++;
    }
    printf("%d", found);
}