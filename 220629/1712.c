#include <stdio.h>

int main(void) {
    int staticCost, variableCost, price;
    int totalCost, totalSales, quantity;

    quantity = 0;
    totalCost = 0;
    totalSales = 0;
    scanf("%d %d %d", &staticCost, &variableCost, &price);
    if (variableCost >= price) {
        quantity = -1;
    } else {
        do {
            totalCost = staticCost + variableCost * quantity;
            totalSales = price * quantity;
            quantity ++;
        } while (totalCost > totalSales);
    } 
    printf("%d", quantity);
}