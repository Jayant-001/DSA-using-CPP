// https://leetcode.com/problems/remove-linked-list-elements/
// leetcode 203


Node * uniqueSortedList(Node * head) {
    // Write your code here.
    
    if(head == NULL)
        return NULL;
    Node *cur = head;
    while(cur && cur->next) {
        if(cur->data == cur->next->data)
            cur->next = cur->next->next;
        else
            cur = cur->next;
    }
    return head;
}