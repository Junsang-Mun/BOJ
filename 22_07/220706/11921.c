#include <unistd.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int arr[5000001];
    int *input;
    input = (char*)mmap(0, 5000000, PROT_READ, MAP_SHARED, 0, 0);
    strcpy(arr, input);
    printf("%d", arr);
}