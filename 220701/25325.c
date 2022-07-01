#include <stdio.h>

typedef struct vote {
    char name[11];
}vote;

int f_strcmp(const char *s1, const char *s2) {
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i]) {
        i ++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(void) {
    int numberOfStudents;
    int order = 0;
    int called = 0;

    scanf("%d", &numberOfStudents);
    vote STUDENTS[numberOfStudents];
    vote tmp;
    for (int i = 0; i <= numberOfStudents - 1; i ++) {
        scanf("%s", &STUDENTS[i].name);
    }
    for (int ii = 0; ii <= numberOfStudents - 1; ii ++) {
        for (int iii = ii + 1; iii < numberOfStudents; iii ++) {
            if (f_strcmp(STUDENTS[ii].name, STUDENTS[iii].name) > 0) {
                tmp = STUDENTS[ii];
                STUDENTS[ii] = STUDENTS[iii];
                STUDENTS[iii] = tmp;
            }
        }
    }
    while(order < numberOfStudents) {
        if (STUDENTS[order].name == STUDENTS[order + 1].name) {
            called ++;
            order ++; 
        } else {
            printf("%s %d\n", STUDENTS[order].name, called);
            order ++;
        }
        order ++;
    }
}