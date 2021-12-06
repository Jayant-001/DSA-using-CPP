#include <iostream>
using namespace std;

struct BSTNode{
	int data;
	BSTNode* left;
	BSTNode* right;
};

// create a new node and return that node
BSTNode* getNewNode(int data) {
	BSTNode* newNode = new BSTNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// insert data at left of BST if data is less than root->data else insert at right
BSTNode* insert(BSTNode* root, int data) {
	if(root == NULL) {
		root = getNewNode(data);
		return root;
	}
	else if(data <= root->data) {
		root->left = insert(root->left, data);
	}
	else {
		root->right = insert(root->right, data);
	}
	return root;
}

// search in BST, return true if data is available
bool search(BSTNode* root, int data) {
	if(root == NULL)
		return false;
	else if(root->data == data) 
		return true;
	else if(data <= root->data)
		return search(root->left, data);
	else 
		return search(root->right, data);
}

// Iteratice method to find minimum data in BST
int findMinI(BSTNode* root) {
	if(root == NULL) {
		cout << "BST is empty" << endl;
		return -1;
	}
	BSTNode* curr = root;
	while(curr->left != NULL) 
		curr = curr->left;

	return curr->data;
}

// Recursive method ot find minimum number in BST
int findMinR(BSTNode* root) {
	if(root == NULL) {
		cout << "BST is empty" << endl;
		return -1;
	}
	if(root->left == NULL)
		return root->data;

	return findMinR(root->left);
}

// Iteratice method to find maximum number in BST
int findMaxI(BSTNode* root) {
	if(root == NULL){
		cout << "BST is empty" << endl;
		return -1;
	}
	while(root->right != NULL) 
		root = root->right;
	return root->data;
}

// Recursive method to find maximum number in BST
int findMaxR(BSTNode* root) {
	if(root == NULL) {
		cout << "BST is empty" << endl;
		return -1;
	}
	while(root->right != NULL) {
		root = root->right;
	}
	return root->data;
}

int main() {

	BSTNode* root = getNewNode(32);

	root = insert(root, 12);
	root = insert(root, 42);
	root = insert(root, 12);
	root = insert(root, 2);
	root = insert(root, 8);
	root = insert(root, 89);

	cout <<( search(root, 89) ? "FOUND" : "NOT FOUND");
	cout << endl;
	cout << "Minimum : " << findMinR(root);
	cout << endl;
	cout << "Maximum : " << findMaxR(root);

	return 0;
}