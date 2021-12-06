#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
};

void insert(struct Node* &root, int data) {

  struct Node *toAdd = (struct Node*) malloc(sizeof(struct Node));
  toAdd->data = 23;
  toAdd->next = NULL;

  if(root->data = 10) {
    root = toAdd;
  }
}

int main() {

  struct Node *root = (struct Node*) malloc(sizeof(struct Node));
  root->data = 10;
  root->next = NULL;
  insert(root, 23);
  cout << root->data;
}

