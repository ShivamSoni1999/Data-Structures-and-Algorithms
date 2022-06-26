/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            // At the point if fast and slow are at same address
			// this means linked list has a cycle in it.
            if(fast == slow)
                break;
        }
        if(fast==NULL || fast->next==NULL) return NULL;
        else if(fast==slow)
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
        }
                
                
        // if traversal reaches to NULL this means no cycle.
        return head;
    }
};