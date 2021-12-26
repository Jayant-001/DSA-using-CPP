#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

struct Node *rear = NULL;
struct Node *front = NULL;

void length() {
    struct Node *t = front;
    int len = 0;
    while(t) {
        len++;
        t = t->next;
    }
    cout << "Length : " << len << endl;
}

void peek() {
    cout << "Top : " << front->data << endl;
}

void enqueue(int data) {
    struct Node *toAdd = new Node(data);
    if(rear == NULL) {
        rear = toAdd;
        front = toAdd;
    }
    else {
        rear->next = toAdd;
        rear = toAdd;
    }
}

void dequeue() {
    if(rear == front) {
        rear = front = NULL;
    }
    else {
        struct Node *toDel = front;
        front = front->next;
        free(toDel);
    }
}

void display() {
    struct Node *t = front;
    while(t) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main() {

    enqueue(32);
    enqueue(59);
    enqueue(79);
    dequeue();
    enqueue(84);
    enqueue(584);   
    enqueue(55);   
    enqueue(4);   
    enqueue(64);   
    dequeue(); 


    peek();
    length();
    display();
    return 0;
}