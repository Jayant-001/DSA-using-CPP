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

// return length of the list
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

// insert at beginning of the list-----------------------------------------------------------------------------
void insertAtBeginning(node* &head, int val) {
    node *toAdd = new node(val);

    if(head == NULL) {
        head = toAdd;
        return;
    }
    toAdd->next = head;
    head = toAdd;
}

// insert at end of the list-----------------------------------------------------------------------------------
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

// insert at given position
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

// delete from beginning
void deleteFromBeginning(node* &head) {
    if(head == NULL) {
        cout << "list is empty" << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    free(temp);
}

// delete from end
void deleteFromEnd(node* &head) {
    if (head == NULL) {
        cout << "list is empty" << endl;
        return;
    }

    if(head->next == NULL) {
        free(head);
        head = NULL;
    }
    
    node *cur = head;
    while(cur->next->next) {
        cur = cur->next;
    }
    node *toDelete = cur->next;
    cur->next = NULL;
    free(toDelete);

}




// print list data
void print(node *head) {
    node *cur = head;
    while(cur) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}


int main() {
    
    node *head = NULL;
    insertAtBeginning(head, 1);
    print(head);
    // deleteFromEnd(head);

    cout << "lkasdjk";

    cout << "length : " << length(head) << endl;
    print(head);


    return 0;
}