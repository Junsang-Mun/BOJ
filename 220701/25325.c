#include <stdio.h>

void merge(char arr[], int left, int mid, int right) {
    char arrCopy[100], i = left, j = mid+1, k = left;
    while(i <= mid && j <= right) {
        if(arr[i] <= arr[j]) arrCopy[k++] = arr[i++];
        else arrCopy[k++] = arr[j++];
    }
    while(i<=mid) arrCopy[k++] = arr[i++];
    while(j<=right) arrCopy[k++] = arr[j++];
    for(int a=left; a<=right; a++) arr[a] = arrCopy[a];
}

void mergeSort(char arr[], int left, int right) {
    int mid;
    if(left < right) {
        mid = (left+right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(void) {
    int numberOfStudents;
    int order = 0;
    int called = 0;

    scanf("%d", &numberOfStudents);
    char vote[numberOfStudents];
    for (int i = 0; i <= numberOfStudents - 1; i ++) {
        scanf("%s", &vote[i]);
    }
    mergeSort(vote, 0, numberOfStudents - 1);
    while(order < numberOfStudents) {
        if (vote[order] == vote[order + 1]) {
            called ++; 
        } else {
            printf("%c %d", vote[order], called);
        }
        order ++;
    }
}