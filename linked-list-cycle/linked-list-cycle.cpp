// Accolite Amazon D-E-Shaw Hike Lybrate Mahindra MakeMyTrip MAQ Software OYO Paytm Qualcomm Samsung SAP Labs Snapdeal VMWare Walmart Adobe
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL) return false;
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            // At the point if fast and slow are at same address
			// this means linked list has a cycle in it.
            if(fast == slow)
                return true;
        }
        // if traversal reaches to NULL this means no cycle.
        return false;
        
    }
};