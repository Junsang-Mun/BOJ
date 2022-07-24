#include <stdio.h>
#include <string.h>

void a_strlwr(char *s1) {
  while (*s1 != 0) {
    if (*s1 >= 65 && *s1 <= 90)
        *s1 += 32;
    s1++;
  }
}

int fuck(char ch) {
    //a_strlwr(&ch);
    if (strcmp(&ch, "he") == 0 || strcmp(&ch, "she") == 0 || strcmp(&ch, "him") == 0 || strcmp(&ch, "her") == 0) {
        return 1;
    }
    return 0;
}

int main (void) {
    int num, i = 0, tlqkf = 0;

    scanf("%d", &num);
    while (i < num) {
        char ch;
        scanf("%s", &ch);
        if (strcmp(&ch, "he") == 0 || strcmp(&ch, "she") == 0 || strcmp(&ch, "him") == 0 || strcmp(&ch, "her") == 0)
            tlqkf ++;
        i ++;
    }
    printf("%d", tlqkf);
}