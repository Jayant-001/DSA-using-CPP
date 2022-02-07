// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1/#
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        // your code goes here
         if(head == NULL)
            return NULL;
        
        map<int, bool> visited;
        Node *cur = head;
        visited[cur->data] = true;
        
        while((cur && cur->next)  ) {
            if(visited[cur->next->data] == true) {
                cur->next = cur->next->next;
            }
            else {
                visited[cur->next->data] = true;
                cur = cur->next;
            }
        }
        return head;
    }
};