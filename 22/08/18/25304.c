#include <stdio.h>

int main(void)
{
    int total, number, g_price, g_number, calc_total = 0;
    scanf("%d", &total);
    scanf("%d", &number);
    for (int i = 0; i < number; i ++) {
        scanf("%d %d", &g_price, &g_number);
        calc_total += g_number * g_price;
    }
    if (total == calc_total) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}