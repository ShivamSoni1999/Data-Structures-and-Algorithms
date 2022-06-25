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
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        if(head==NULL || head->next == NULL)    //check if the list is empty of has only 1 node
            return head;
        
        while(fast!=NULL && fast->next!= NULL)
        {
            slow = slow->next;          //slow moves by 1 step
            fast = fast->next->next;    //fast moves by 2 steps
        }
           return slow;
        
    }
};