#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);

    if(head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    n->next = temp;
    head = n;
}

void length(Node* head) {
    int len = 1;
    if (head == NULL) {
        cout << 0 << endl;
        return;
    }

    while(head->next != NULL) {
        len++;
        head = head->next;
    }

    cout << len << endl;
}

int search(Node* &head, int val) {
    int index = 0;
    Node* temp = head;

    while(temp != NULL) {
        if (temp->data == val) {
            return index;
        }
        else {
            temp = temp->next;
            index++;
        }
    }
    return -1;
}

void print(Node* head) {
    if (head == NULL) {
        cout << "null";
        return;
    }

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}


int main() {

    Node* head = new Node(5);
    insertAtTail(head, 4);
    insertAtHead(head, 1);
    insertAtTail(head, 10);
    insertAtHead(head, 12);

    length(head);

    cout << search(head, 170);
    cout << endl;
    print(head);

    return 0;
}


