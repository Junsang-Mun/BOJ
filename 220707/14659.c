#include <stdio.h>

int main(void) {
    int hanzo, i = 0;
    int highest = 0, slain = 0, slain_tmp = 0, index = 0;
    int mt[10001] = {0, };
    
    scanf("%d", &hanzo);
    while(i < hanzo) {
        scanf("%d", &mt[i]);
        i ++;
    }
    i = 0;
    while(i < hanzo) {
        if (mt[i] >= highest) {
            slain_tmp = i - index;
            index = i;
        }
        if (slain_tmp > slain) {
            slain = slain_tmp;
        }
    }
}