#include <stdio.h>

typedef struct vote {
    char name[11];
}vote;

int main(void) {
    int numberOfStudents;
    int order = 0;
    int called = 0;

    scanf("%d", &numberOfStudents);
    //char vote[numberOfStudents];
    vote STUDENTS[numberOfStudents];
    for (int i = 0; i <= numberOfStudents - 1; i ++) {
        scanf("%s", &STUDENTS[i].name);
    }
    //mergeSort(vote, 0, numberOfStudents - 1);
    while(order < numberOfStudents) {
        if (STUDENTS[order].name == STUDENTS[order + 1].name) {
            called ++; 
        } else {
            printf("%c %d", STUDENTS[order].name, called);
        }
        order ++;
    }
}