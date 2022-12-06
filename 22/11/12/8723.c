// ██████╗  ██████╗      ██╗
// ██╔══██╗██╔═══██╗     ██║
// ██████╔╝██║   ██║     ██║
// ██╔══██╗██║   ██║██   ██║
// ██████╔╝╚██████╔╝╚█████╔╝
// ╚═════╝  ╚═════╝  ╚════╝
// Created by: gosomi
// Created at: 2022/11/12 (토요일)
// BOJ Number: 8723
// https://boj.kr/8723

#include <stdio.h>

void sort(int *arr) {
	int buf;
	if (arr[0] >= arr[1] && arr[0] >= arr[2]) {
		return ;
	} else if (arr[1] >= arr[0] && arr[1] >= arr[2]) {
		int buf = arr[1];
		arr[1] = arr[0];
		arr[0] = buf;
		return ;
	} else if (arr[2] >= arr[0] && arr[2] >= arr[1]) {
		int buf = arr[2];
		arr[2] = arr[0];
		arr[0] = buf;
		return ;
	}
}

int main(void) {
	int arr[3];

	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	sort(arr);
	//printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
	if (arr[0] == arr[1] && arr[1] == arr[2]) {
		printf("2");
		return 0;
	}
	else if (arr[0] * arr[0] == ((arr[1] * arr[1]) + (arr[2] * arr[2]))) {
		printf("1");
		return 0;
	} else {
		printf("0");
		return 0;
	}
}