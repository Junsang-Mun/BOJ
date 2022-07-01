#include <stdio.h>

typedef struct vote {
    char name[11];
}vote;

int f_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2){
  		str1++;
  		str2++;
  }
	return (*str1 - *str2);
}

int main(void) {
    int numberOfStudents;
    int order = 0;
    int called = 1;
    int j = 0;

    scanf("%d", &numberOfStudents);
    vote STUDENTS[numberOfStudents];
    vote tmp;
    for (int i = 1; i <= numberOfStudents; i ++) {
        scanf("%s", STUDENTS[i].name);
    }
    while (scanf("%s", STUDENTS[j].name) != EOF) {
        j ++;
    }
    for (int ii = 1; ii <= j; ii ++) {
        for (int iii = ii + 1; iii < j; iii ++) {
            if (f_strcmp(STUDENTS[ii].name, STUDENTS[iii].name) > 0) {
                tmp = STUDENTS[ii];
                STUDENTS[ii] = STUDENTS[iii];
                STUDENTS[iii] = tmp;
            }
        }
    }
    while(order < j) {
        if (f_strcmp(STUDENTS[order].name, STUDENTS[order + 1].name) == 0)
            called ++;
        else {
            printf("%s %d\n", STUDENTS[order].name, called);
            called = 1;
        }
        order ++;
    }
}