// Doubly Linked List/////////////////////////............/././....../././././//.\/\.\/\.\\/\.\\/\.\/\/
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next, *prev;
    Node (int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

// return length of the list ....................................
int length(struct Node *head) {
    int len = 0;
    while(head) {
        len++;
        head = head->next;
    }
    return len;
}

// insert at head ...................................
void insertHead(struct Node* &head, int data) {
    struct Node *toAdd = new Node(data);
    if(head == NULL) {
        head = toAdd;
        return;
    }
    struct Node *temp = head;
    toAdd->next = temp;
    temp->prev = toAdd;
    head = toAdd; 
}

// insert At tail of the linked list............................
void insertTail(struct Node* &head, int data) {

    struct Node *toAdd = new Node(data);
    if(head == NULL) {
        head = toAdd;
        return;
    }
    struct Node *temp = head;
    while(temp->next) {
        temp = temp->next;
    }
    temp->next = toAdd;
    toAdd->prev = temp;
}

// insert node at given position(0 based index)..........................
void insertPos(struct Node* &head, int pos, int data) {
    if(pos > length(head)) {
        cout << "Invalid position" << endl;
        return;
    }
    struct Node *toAdd = new Node(data);
    struct Node *temp = head;
    while(--pos) 
        temp = temp->next;
    
    // cout << "Data : " << temp->data << endl;
    struct Node *t = temp->next;
    temp->next = toAdd;
    toAdd->prev = temp;
    toAdd->next = t;
    t->prev = toAdd;
}

// delete from head
void deleteHead(struct Node* &head) {
    head = head->next;
    head->prev = NULL;
}

// delete last node
void deleteTail(struct Node* &head) {
    struct Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

void deletePos(struct Node* &head, int pos) {
    if(pos > length(head)){
        cout << "Invalid index" << endl;
        return;
    }
    struct Node *toDel = head;
    while(--pos) {
        toDel = toDel->next;
    }
    cout << "id" << toDel->data << endl;
    struct Node *t = toDel->prev;
    t->next = toDel->next;
    t->next->prev = t;
    free(toDel);
}

// print whole list................................
void display(struct Node *head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    struct Node *head = NULL;

    insertTail(head, 12);
    insertTail(head, 23);
    insertHead(head, 959);
    insertHead(head, 2);
    insertHead(head, 548);
    insertHead(head, 86);
    insertHead(head, 622);

    display(head);
    deletePos(head, 3);

    display(head);
    cout << "Length : " << length(head);

    return 0;
}