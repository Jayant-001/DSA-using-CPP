#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};


// queston at gfg...........
class Solution
{
    private:
    Node* getStartingNode(Node* head) {
        if(head == NULL) return NULL;
        Node *slow = head;
        Node *fast = head;
        Node *loop = NULL;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                loop = slow;
                break;
            }
        }
        
        if(loop == NULL)
            return NULL;
        
        Node *temp = head;
        while(temp != slow) {
            temp = temp->next;
            slow = slow->next;
        }
        
        return temp;
    }
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head == NULL)
            return;
            
        Node *loop = getStartingNode(head);
        if(loop == NULL) return;
        
        Node *t = loop;
        while(loop ->next != t)
            loop = loop->next;
        
        loop->next = NULL;
        
        
    }
};