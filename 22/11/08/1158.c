#include <stdio.h>

typedef struct node {
	char value;
	struct node *prev;
	struct node *next;
} Node;

Node *createNode(char val) {
	Node *n = (Node *)malloc(sizeof(Node));
	if (n == NULL) {
		return -1;
	}
	n->value = val;
	n->next = NULL;
	return n;
}

Node *chainingNode(Node **head, Node *new) {
	if (*head == NULL) {
		*head = new;
	} else {
		Node *tail = *head;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = new;
		new->prev = tail;
	}
}

void deleteNode(Node **head, Node *n) {
	if (*head == n) {
		head = n->next;
		if (*head != NULL) {
			(*head)->prev = NULL;
		}
		n->prev = NULL;
		n->next = NULL;
	} else {
		Node *tmp = n;
		if (n->prev != NULL) {
			n->prev->next = tmp->next;
		}
		if (n->next != NULL) {
			n->next->prev = tmp->prev;
		}
		n->prev = NULL;
		n->next = NULL;
	}
}

int main(void) {
	char instruction[1000001];
	int i = 0;
	Node *list = NULL;
	Node *tmp = NULL;

	scanf("%s", &instruction);
	while (instruction[i]) {
		switch (instruction[i]) {
		case '-':
			deleteNode(&list, )
			break ;
		case '<':
			if ()
			break ;
		case '>':
			break ;
		default:
			tmp = createNode(instruction[i]);
			chainingNode(&list, tmp);
			break ;
		}
		i ++;
	}
}