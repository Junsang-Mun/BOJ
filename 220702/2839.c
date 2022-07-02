#include <stdio.h>

int main(void) {
    int weight;
    int weightCopy;
    int carry;
    int i;

    i = 0;
    scanf("%d", &weight);
    if (weight % 5 == 0) {
        carry = weight / 5;
    } else {
        weightCopy = weight;
        while (weightCopy > 0) {
            weightCopy -= 5;
            i ++;
            if ((weightCopy != 0) && (weightCopy % 3 == 0)) {
                carry = i;
                carry += weightCopy / 3;
                weight = -10000;
                break ;
            }
        }
        if ((weight > 0) && (weight % 3 == 0)) {
            carry = weight / 3;
        } else if (weight > 0) {
            carry = -1;
        }
    }
    printf("%d", carry);
    return 0; 
}