// Problem = Leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
ListNode* sort(ListNode *first, ListNode *second) {
    
    if(first->next == NULL) {
        first->next = second;
        return first;
    }
    
    ListNode *cur1 = first;
    ListNode *next1 = first->next;
    ListNode *cur2 = second;
    ListNode *next2 = second->next;
    
    while(next1 && cur2) {
        if((cur2->val >= cur1->val) && (cur2->val <= next1->val)) {
            cur1->next = cur2;
            next2 = cur2->next;
            cur2->next = next1;

            cur1 = cur2;
            cur2 = next2;
        }
        else {
            cur1 = next1;
            next1 = next1->next;

            if(next1 == NULL) {
                cur1->next = cur2;
                return first;
            }
        }
    }
    return first;
}
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL) {
            return list2;
        }
        if(list2 == NULL) 
            return list1;
        
        if(list1->val <= list2->val) {
            return sort(list1, list2);
        }
        else {
            return sort(list2, list1);
        }
        
    }
};