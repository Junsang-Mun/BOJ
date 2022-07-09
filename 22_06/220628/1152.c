#include <stdio.h>
#include <string.h>

int main(void) {
    int wc = 0;
    char ch[1000001];

    scanf("%[^\n]", ch);
    char *ptr = strtok(ch, " ");

    while (ptr != 0) {
        wc ++;
        ptr = strtok(NULL, " ");
    }
    printf("%d\n", wc);
}