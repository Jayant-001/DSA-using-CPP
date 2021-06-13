#include <iostream>
using namespace std;

struct node{
    public:
    int data;
    node *next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

// return length of the list------------------------------------------------------------------------------------------------>
int length(node *head) {
    if(head == NULL) {
        return 0;
    }
    int len = 0;
    node *cur = head;
    while(cur) {
        len++;
        cur = cur->next;
    }
    return len;
}

// insert at beginning of the list------------------------------------------------------------------------------------------>
void insertAtBeginning(node* &head, int val) {
    node *toAdd = new node(val);

    if(head == NULL) {
        head = toAdd;
        return;
    }
    toAdd->next = head;
    head = toAdd;
}

// insert at end of the list------------------------------------------------------------------------------------------------>
void insertAtEnd(node* &head, int val) {
    node *toAdd = new node(val);
    node *cur = head;

    if(head == NULL) {
        head = toAdd;
        return;
    }

    while(cur->next) {
        cur = cur->next;
    }
    cur->next = toAdd;
}

// insert at given position------------------------------------------------------------------------------------------------->
void insertAtLoc(node* &head, int pos, int val) {
    if(pos > length(head)) {
        cout << "index out of bound" << endl;
        return;
    }

    node *toAdd = new node(val);
    node *cur = head;
    int count = 1;
    while(cur){
        if(count == pos-1) {
            node *t = cur->next;
            cur->next = toAdd;
            toAdd->next = t;
        }
        cur = cur->next;
        count++;
    }
}

// delete from beginning---------------------------------------------------------------------------------------------------->
void deleteFromBeginning(node* &head) {
    if(head == NULL) {
        cout << "list is empty" << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    free(temp);
}

// delete from end---------------------------------------------------------------------------------------------------------->
void deleteFromEnd(node* &head) {
    if (head == NULL) {
        cout << "list is empty" << endl;
        return;
    }

    if(head->next == NULL) {
        node *temp = head;
        free(temp);
        head = NULL;
        return;
    }
    
    node *cur = head;
    while(cur->next->next) {
        cur = cur->next;
    }
    free(cur->next);
    cur->next = NULL;
}

// delete from specific position------------------------------------------------------------------------------------------->
void deleteFromLoc(node* &head, int pos) {
    if(head == NULL) {
        cout << "Can't delete from empty list" << endl;
        return;
    }

    if(pos > length(head)) {
        cout << "index out of bound" << endl;
        return;
    }

    node *cur = head;
    int count = 1;
    while(cur) {
        if(count == pos-1){
            node *temp = cur->next;
            cur->next = temp->next;
            free(temp);
        }
        cur = cur->next;
        count++;
    }

}

// reverse the list------------------------------------------------------------------------------------------------------------>
void reverse(node* &head) {
    node *prevNode = NULL;
    node *curNode = head;
    node *nextNode = head;
    
    while(nextNode) {
        nextNode = nextNode->next;
        curNode->next = prevNode;
        prevNode = curNode;
        curNode = nextNode;
    }
    head = prevNode;
}



// print list data------------------------------------------------------------------------------------------------------------>
void print(node *head) {
    if(head == NULL) {
        cout << "list is empty" << endl;
        return;
    }
    node *cur = head;
    while(cur) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}


int main() {
    
    node *head = NULL;
    
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);

    reverse(head);


    cout << "length : " << length(head) << endl;
    print(head);


    return 0;
}