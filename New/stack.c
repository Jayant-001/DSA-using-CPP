#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

void insert(struct Node* root, int data) {
  struct Node* toAdd = (struct Node*) malloc(sizeof(struct Node));
  toAdd->data = data;
  toAdd->next = NULL;

  if(root == NULL) {
    root = toAdd;
  }
}

void change(int *a, int *b) {
  *a = 23;
  *b = 100;
}

int main(void) {

  struct Node *root = NULL;

  insert(&root, 76);

  printf("%d", root->data);

  int a = 31;
  int b = 88;

  change(&a, &b);

  printf("%d %d", a, b);


  return 0;
}