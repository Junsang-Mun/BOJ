#include <stdio.h>
#define MAX_STACK 10000

int stack[MAX_STACK];
int top = -1;

int equals(char *a, char *b) {
	int i = 0;
	while (a[i] && b[i]) {
		if (a[i] == b[i]) {
			i ++;
		} else {
			return 0;
		}
	}
	return 1;
}

int stackPush(int v) {
	if (top == MAX_STACK - 1) {
		return -1;
	}
	top ++;
	stack[top] = v;
	return 1;
}

int stackPop() {
	if (top == -1) {
		return -1;
	}
	int b = stack[top];
	top --;
	return b;
}

int stackSize() {
	return top + 1;
}

int stackIsEmpty() {
	if (top == -1) {
		return 1;
	}
	return 0;
}

int stackTop() {
	if (top == -1) {
		return -1;
	}
	return stack[top];
}

int main(void) {
	int n;

	scanf("%d", &n);
	for (int a = 0; a < n; a ++) {
		char command[10];
		int subcommand;
		scanf("%s", command);

		if (equals(command, "push")) {
			scanf("%d", &subcommand);
			stackPush(subcommand);
		} else if (equals(command, "pop")) {
			int t = stackPop();
			printf("%d\n", t);
		} else if (equals(command, "size")) {
			int t = stackSize();
			printf("%d\n", t);
		} else if (equals(command, "empty")) {
			int t = stackIsEmpty();
			printf("%d\n", t);
		} else if (equals(command, "top")) {
			int t = stackTop();
			printf("%d\n", t);
		}
	}
}