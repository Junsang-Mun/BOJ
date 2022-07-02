#include <stdio.h>

int main(void) {
    int weight;
    int carry;

    scanf("%d", &weight);
    carry = weight / 5;
    if ((weight / 5) % 3 == 0) {
        carry += (weight / 5) % 3;
    } else {
        carry = -1;
    }
    printf("%d", carry);
    return 0; 
}