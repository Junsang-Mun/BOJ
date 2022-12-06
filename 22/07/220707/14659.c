#include <stdio.h>

int main(void) {
    int hanzo, i = 0, ii;
    int slain = 0, slain_tmp = 0;
    int mt[100001] = {0, };
    
    scanf("%d", &hanzo);
    while(i < hanzo) {
        scanf("%d", &mt[i]);
        i ++;
    }
    i = 0;
    while(i < hanzo) {
        slain_tmp = 0;
        for (ii = i + 1; ii < hanzo; ii ++) {
            if (mt[i] > mt[ii]) {
                slain_tmp ++;
            } else {
                break ;
            }
        }
        if (slain < slain_tmp) {
            slain = slain_tmp;
        }
        i ++;
    }
    printf("%d", slain);
}