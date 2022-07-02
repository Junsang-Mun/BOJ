#include <stdio.h>

int main(void) {
    int weight;
    int carry;

    scanf("%d", &weight);
    if (weight % 5 == 0) {
        carry = weight / 5;
    } else if ((weight / 5) % 3 == 0) {
        carry = weight / 5;
        carry += (weight / 5) % 3;
    } else if (weight % 3 == 0) {
        carry = weight / 3;
    } else {
        carry = -1;
    }
    printf("%d", carry);
    return 0; 
}