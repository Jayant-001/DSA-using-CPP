#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

// return lenght of the list ------------------------------------------------------------------------------------------------>
int length(Node *head) {
    if(head == NULL) {
        return 0;
    }

    int len = 0;
    Node *temp = head;
    while(temp){
        len++;
        temp = temp->next;
    }
    return len;
}

// add an element at beginning of the list ----------------------------------------------------------------------------------->
void push(Node* &head, Node* &tail, int d) {
    Node *newNode = new Node(d);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

// add an element at end of the list ------------------------------------------------------------------------------------------>
void add(Node* &head, Node* &tail, int d) {
    Node *newNode = new Node(d);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

// insert an element at given location ---------------------------------------------------------------------------------------->
void insert(Node* &head, int pos, int d) {

    if(pos >= length(head)) {
        cout << "index out of bound" << endl;
        return;
    }

    Node *cur = head;
    Node *toAdd = new Node(d);
    int i = 1;
    while(cur) {
        if(i == pos-1) {
            Node *t = cur->next;
            cur->next = toAdd;
            toAdd->prev = cur;

            toAdd->next = t;
            t->prev = toAdd;
        }

        i++;
        cur = cur->next;
    }

}

// remove an element from head of the list ------------------------------------------------------------------------------------>
void deleteHead(Node* &head) {
    if(length(head) == 0) {
        cout << "list is empty" << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    head->prev = NULL;

    free(temp);
}

// remove last element from the given list ------------------------------------------------------------------------------------->
void deleteTail(Node* &head, Node* &tail) {
    if(length(head) == 0) {
        cout << "list is empty" << endl;
        return;
    }

    Node *t = tail;
    tail = tail->prev;
    tail->next = NULL;

    free(t);
}

// remove an element at given index -------------------------------------------------------------------------------------------->
void deleteIndex(Node* &head, int pos) {
    if(length(head) == 0) {
        cout << "list is empty" << endl;
        return;
    }

    Node *cur = head;
    int i = 1;  
    while(cur) {
        if(i == pos-1) {
            Node *t = cur->next;
            cur->next = t->next;
            cur->next->prev = cur;
            free(t);
        }

        i++;
        cur = cur->next;
    }
}

// reverse the list ------------------------------------------------------------------------------------------------------------>
void reverse(Node* &head, Node* &tail) {

    if(length(head) == 0) {
        cout << "list is empty" << endl;
        return;
    }

    Node *cur = head, *nextNode;

    while(cur) {
        nextNode = cur->next;
        cur->next = cur->prev;
        cur->prev = nextNode;
        cur = nextNode;
    }

    cur = head;
    head = tail;
    tail = cur;

}


// print elements of the list --------------------------------------------------------------------------------------------------->
void print(Node *head) {
    if(head == NULL) {
        cout << "List is empty." << endl;;
        return;
    }
    Node *temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main() {

    Node *head = NULL;
    Node *tail = head;
    add(head, tail, 2);
    add(head, tail, 3);
    add(head, tail, 4);
    add(head, tail, 5);
    push(head, tail, 101);
    add(head, tail, 20);



    cout << "lenght: " << length(head) << endl;;
    print(head);

    insert(head, 5, 23);
    print(head);
    
    deleteIndex(head, 3);
    print(head);

    deleteIndex(head, 5);
    print(head);

    reverse(head, tail);
    print(head);


    return 0;
}