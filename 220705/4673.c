#include <stdio.h>

int notSelfNumber (int c) {
    int cc = c;
    while (c != 0) {
        cc += c % 10;
        c /= 10;
    }
    return cc;
}

int main (void) {
    int arr [10001];
    int i = 1;
    
    while (i <= 10000) {
        //arr;
    }
}