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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL or k==0)
            return head;
        
        int count=1;
        ListNode* cur=head;
        while(cur->next)
        {
            count++;
            cur=cur->next;
        }
        k = k % count;
        k=count-k; //starting from left its n-kth node 
        cur->next = head; //made circular LL
        //cur=head;
        
        while(k--)
            cur=cur->next;
        
        // make the node head and break connection
        head=cur->next;
        cur->next=NULL;
        return head;
        
    }
};