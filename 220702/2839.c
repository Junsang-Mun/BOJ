#include <stdio.h>

int main(void) {
    int weight;
    int carry;
    int i;

    i = 0;
    scanf("%d", &weight);
    if (weight % 5 == 0) {
        carry = weight / 5;
    } else if (weight % 3 == 0) {
        carry = weight / 3;
    } else {
        while (1) {
            weight -= 5;
            i ++;
            if ((weight != 0) && (weight % 3 == 0)) {
                carry = i;
                carry += weight / 3;
                break ;
            }
            if (weight <= 0) {
                carry = -1;
                break ;
            }
        }
    }
    printf("%d", carry);
    return 0; 
}