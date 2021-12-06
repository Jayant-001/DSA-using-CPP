#include <stdio.h>
#include <stdlib.h>

void fun(int **n) {
	**n = 83;
}

struct Node{
	int data;
	struct Node *next;
};

void insert(struct Node **root, int data) {
	struct Node *toAdd = (struct Node*) malloc(sizeof(struct Node));
	toAdd->data = data;
	toAdd->next = NULL;


}
int main() {

	// int n = 11;
	// int *p_n = &n;

	// fun(&p_n);

	// printf("%d", *p_n);


	struct Node *root = NULL;
	insert(&root, 34);

	printf("%d", root->data);


	printf("\nRest of code");
	return 0;
}