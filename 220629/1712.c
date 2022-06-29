#include <stdio.h>

int main(void) {
    int staticCost, variableCost, price, quantity;

    quantity = 0;
    scanf("%d %d %d", &staticCost, &variableCost, &price);
    if (variableCost >= price) {
        quantity = -1;
    } else {
        quantity = staticCost / (price - variableCost) + 1;
    } 
    printf("%d", quantity);
}