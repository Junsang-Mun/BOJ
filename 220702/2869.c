#include <stdio.h>

int main(void) {
    int up, down, height;
    int dn = 0;

    scanf("%d %d %d", &up, &down, &height);
    if ((height - down) % (up - down) != 0) {
        dn = (height - down) / (up - down) + 1;
    } else {
        dn = (height - down) / (up - down);
    }
    printf("%d", dn);
    return 0;
}