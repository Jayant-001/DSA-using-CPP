#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node (int d) {
        data = d;
        next = NULL;
    }
};

struct Node *front = NULL;
struct Node *rear = NULL;

// ----------------------------------------------------------LENGTH------------------------------------------------------
void length() {
    if(front == NULL) 
        cout << "Length: 0" << endl;
    else {
        int len = 1;
        struct Node *temp = front;
        while(temp->next != front) {
            len++;
            temp = temp->next;
        }
        cout << "Length: " << len << endl;
    }
}

// ----------------------------------------------------------ENQUEUE------------------------------------------------------
void enqueue(int data) {
    struct Node *toAdd = new Node(data);
    if(front == NULL) {
        rear = front = toAdd;
        return;
    }
    else {
    rear->next = toAdd;
    rear = rear->next;
    }
    rear->next = front;
}

// ----------------------------------------------------------DEQUEUE------------------------------------------------------
void dequeue() {
    if(front == NULL) {
        cout << "UNderflow" << endl;
    }
    else {
        front = front->next;
        rear->next = front;
    }
}

// ----------------------------------------------------------DISPLAY------------------------------------------------------
void display() {
    if(front == NULL) 
        cout << "Queue is empty." << endl;
    else { 
        struct Node *temp = front;
        while(temp->next != front) {
            cout << temp->data << " ";
            temp = temp->next;;
        }
        cout << temp->data << endl;
    }
}

// ----------------------------------------------------------PEEK------------------------------------------------------
void peek() {
    if(front == NULL)
        cout << "Queue is Empty." << endl;
    else   
        cout << "Front: " << front->data << endl;
}

// ----------------------------------------------------------DISPLAY------------------------------------------------------

int main() {

    enqueue(83);
    enqueue(85);
    enqueue(73);
    enqueue(652);
    enqueue(75);
    enqueue(96);
    dequeue();
    enqueue(64);
    enqueue(99);
    enqueue(85);

    display();
    peek();
    length();

    return 0;
}