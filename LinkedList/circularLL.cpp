#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

// add an element at beginning of the list
void add(Node* &head, int d) {
    Node *toAdd = new Node(d);
    if(head == NULL) {
        head = toAdd;
        head->next = head;
        return;
    }

    Node *temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = toAdd;
    toAdd->next = head;
}


void print(Node *head) {
    if(head == NULL) {
        cout << "List is empty. " << endl;
        return;
    }
    Node *temp = head;
    while(temp->next != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

}

int main() {

    Node *head = new Node(4);

    add(head, 23);
    // print(head);

    cout << head;
    head = head->next;
    cout << head;
    head = head->next;
    cout << head;
    head = head->next;



    return 0;
}