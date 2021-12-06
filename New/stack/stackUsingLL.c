#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node* next;
};
int top = -1;

struct Node* push(struct Node* root, int data) {
  struct Node* toAdd = (struct Node*) malloc(sizeof(struct Node));
  toAdd->data = data;
  toAdd->next = NULL;
  
  if(top == -1) {
  	top++;
    root = toAdd;
    return root;
  }
  struct Node *temp = root;
  while(temp->next) {
    temp = temp->next;
  }
  top++;
  temp->next = toAdd;
  return root;
}

int pop(struct Node* root) {

	if(top == -1) {
		printf("Can't delete from an empty stack");
		return -1;
	}
	struct Node* temp = root;
	while(temp->next) {
		temp = temp->next;
	}
	int d = temp->data;
	temp = NULL;
	top--;
	return d;
}

int peek(struct Node* root) {
	if(top == -1) {
		printf("Stack is empty\n");
		return -1;
	}
	struct Node* temp = root;
	while(temp->next) {
		temp = temp->next;
	}
	top--;
	return temp->data;
}

void traverse(struct Node *root) {
	if(top == -1) {
		printf("Stack is empty");
		return;
	}
	if(root == NULL) {
		return;
	}
	traverse(root->next);
	printf("%d ", root->data);
}

int main(void) {
  
  struct Node *root = NULL;

  root = push(root, 23);
  root = push(root, 11);
  root = push(root, 54);

  printf("%d\n", pop(root));

  traverse(root);

  printf("\n%d", peek(root));

  return 0;
}