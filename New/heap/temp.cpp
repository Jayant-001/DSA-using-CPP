#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

struct Node *first = NULL;
struct Node *last = NULL;

void insert(int data) {
	struct Node *toAdd = (struct Node*) malloc(sizeof(struct Node));
	toAdd->data = data;
	toAdd->next = NULL;
	toAdd->prev = NULL;

	if(first == NULL && last == NULL) {
		first = toAdd;
		last = toAdd;
		return;
	}
	if(data < first->data) {
		first->prev = toAdd;
		toAdd->next = first;
		first = first->prev;
		return;
	}
	if(data > last->data) {
		last->next = toAdd;
		last = last->next;
	}
}

int main() {

	// int n;
	// cin >> n;
	// vector<int> v(n);
	// for(int i = 0; i < n; i++) 
	// 	cin >> v[i];

	insert(32);
	insert(28);
	insert(11);
	insert(89);
	insert(84);

	// cout << first->data;
	// cout << endl;
	// cout << last->data;

	struct Node *temp = first;
	while(temp){
		cout << temp->data << endl;
		temp = temp->next;
	}

	return 0;
}