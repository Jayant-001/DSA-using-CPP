#include <iostream>
using namespace std;

    struct node
    {
        public:
        int data;
        node *next;
        
        node(int d) {
            data = d;
            next = NULL;
        }
    };

    void insertAtBeginning(node* &head) {


        
    }




int main() {

    node *head = new node(5);
    
    cout << head->data << endl << head->next;



    return 0;
}