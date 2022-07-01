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
    int students_ = 0;
    int voted_ = 0;
    int called = 0;
    int j = 0;

    scanf("%d", &numberOfStudents);
    vote STUDENTS[101];
    vote VOTED[10001];
    vote tmp;

    for (int i = 0; i <= numberOfStudents; i ++) {
        scanf("%s", STUDENTS[i].name);
    }
    while (scanf("%s", VOTED[j].name) != EOF) {
        j ++;
    }
    for (int ii = 1; ii <= j; ii ++) {
        for (int iii = ii + 1; iii < j; iii ++) {
            if (f_strcmp(VOTED[ii].name, VOTED[iii].name) > 0) {
                tmp = VOTED[ii];
                VOTED[ii] = VOTED[iii];
                VOTED[iii] = tmp;
            }
        }
    }
    while(students_ < numberOfStudents) {
        if (f_strcmp(VOTED[voted_].name, STUDENTS[students_].name) == 0) {
            called ++;
        } else {
            printf("%s %d\n", STUDENTS[students_].name, called);
            called = 0;
            students_ ++;
        }
        voted_ ++;
    }
}