#include <stdio.h>

int main(void) {
    int weight;
    int carry;

    carry = 0;
    scanf("%d", &weight);
    while (weight >= 0) {
        if (weight % 5 == 0) {
            carry += weight / 5;
            printf("%d", carry);
            return 0;
        }
        carry ++;
        weight -= 3;
    }
    printf("%d", -1);
    return 0; 
}