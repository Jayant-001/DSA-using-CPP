// https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTab=0
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/

Node *merge(Node *left, Node *right) {
    if(left == NULL)
        return right;
    if(right == NULL)
        return left;
    
    Node *ans = NULL;
    if(left->data <= right->data) {
        ans = left;
        ans->child = merge(left->child, right);
    }
    else {
        ans = right;
        ans->child = merge(left, right->child);
    }

    return ans;    
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(head == NULL || head->next == NULL)
        return head;
    Node *down = head;
    Node *right = flattenLinkedList(head->next);
    down->next = NULL;
    
    Node *ans = merge(down, right);
    return ans;
}
