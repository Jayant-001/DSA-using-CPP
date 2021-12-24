#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node *root = NULL;

void insertAtBeginning(int data) {
	struct Node *newNode;
	newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;

	if(root == NULL) {
		root = newNode; 
		return;
	}
	newNode->next = root;
	root = newNode;
}

void insertAtEnd(int data) {
	struct Node *toAdd;
	toAdd = (struct Node*) malloc(sizeof(struct Node));
	toAdd->data = data;
	toAdd->next = NULL;

	if(root == NULL) {
		root = toAdd;
		return;
	}
	struct Node *temp = root;
	while(temp->next) {
		temp = temp->next;
	}
	temp->next = toAdd;
}

int length() {
	if(root == NULL) {
		return -1;
	}
	struct Node *cur = root;
	int len = 0;
	while(cur) {
		cur = cur->next;
		len++;
	}
	return len;
}

void traverse() {
	struct Node *temp = root;
	while(temp) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

bool isEmpty() {
	if(root == NULL) 
		return true;
	return false;
}

int main() {
	printf("%d\n", isEmpty());

	insertAtBeginning(76);
	insertAtBeginning(7);
	insertAtBeginning(6);
	insertAtEnd(99);
	insertAtEnd(100);
	traverse();
	printf("%d", length());
	printf("%d", isEmpty());


	return 0;
}