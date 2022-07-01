#include <stdio.h>

typedef struct vote {
    char name[11];
}vote;

typedef struct result {
    char name[11];
    int voted;
}result;

int f_strcmp(char *str1, char *str2) {
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
    vote VOTED[10001];
    vote tmp;
    result STUDENTS[101];

    scanf("%d", &numberOfStudents);

    for (int i = 0; i < numberOfStudents; i ++) {
        scanf("%s", STUDENTS[i].name);
    }
    while (scanf("%s", VOTED[j].name) != EOF) {
        j ++;
    }
    for (int i = 0; i < j; i ++) {
        for (int ii = 0; ii < j - 1; ii ++) {
            if (f_strcmp(VOTED[ii].name, VOTED[ii + 1].name) > 0) {
                tmp = VOTED[ii];
                VOTED[ii] = VOTED[ii + 1];
                VOTED[ii + 1] = tmp;
            }
        }
    }
    while(students_ < numberOfStudents) {
        if (f_strcmp(VOTED[voted_].name, STUDENTS[students_].name) == 0) {
            called ++;
            voted_ ++;
        } else {
            STUDENTS[students_].voted = called;
            students_ ++;
            called = 0;
        }
    }
}