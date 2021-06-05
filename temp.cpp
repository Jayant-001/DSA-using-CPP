#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

// print length of the list-------------------------------------------------------------
int length(node* head) {
    int len = 0;
    if(head == NULL) {
        return len;
    }

    node *cur = head;
    while(cur) {
        len++;
        cur = cur->next;
    }
    return len;
}

// insert at beginning of the list------------------------------------------------------
void addAtBeginning(node* &head, int val) {
    node *add = new node(val);
    if (head == NULL) {
         head = add;
         return;
    }
    add->next = head;
    head = add;
}

// insert at end of the list-------------------------------------------------------------
void append(node* &head, int val) {
    node *toAdd = new node(val);
    if (head == NULL) {
        head = toAdd;
        return;
    }

    node *cur = head;
    while(cur->next) {
        cur = cur->next;
    }
    cur->next = toAdd;
}

// insert at given location--------------------------------------------------------------
void insert(node* &head, int i, int val) {

    if(i > length(head)) {
        cout << endl << "index out of bound" << endl;
        return;
    }

    int count = 1;
    node *cur = head;
    node *toAdd = new node(val);
    while(cur) {
        if(count == i-1) {
            node *t = cur->next;
            cur->next = toAdd;
            toAdd->next = t;
            return;
        }
        count++;
        cur = cur->next;
    }
}

// delete from beginning of the list
void deleteFromBeg(node* &head){
    if(head == NULL) {
        cout << "list is empty" << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    free(temp);
}

// delete from end of the list
void deleteFromEnd(node* &head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node *cur = head;
    while(cur->next) {
        node *prev = cur;
        cur = cur->next;
    }
    cur->next = NULL;
    free(cur->next);
}

// traverse whole list and print list's data-----------------------------------------------
void print(node *head) {
    node *t = head;

    while(t) {
        cout << t->data << " ";
        t = t->next;
    }
}

int main() {

    node *head = NULL;

    addAtBeginning(head, 2);
    deleteFromBeg(head);

    cout << "length:- " << length(head) << endl;
    print(head);
    
    return 0;
}