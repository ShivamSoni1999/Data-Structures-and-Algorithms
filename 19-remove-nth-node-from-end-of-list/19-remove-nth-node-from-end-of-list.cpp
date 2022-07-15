
class Solution {
public:
   ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        while(n--) 
            fast = fast -> next;      // iterate first n nodes using fast
       
        if(fast==NULL) return head -> next; // if fast is already null, it means we have to delete head itself. So,just return next of head
       
        while(fast -> next)                  // iterate till fast reaches the last node of list
        {
            fast = fast -> next;
            slow = slow -> next;
        }            
        slow -> next = slow -> next -> next; // remove the nth node from last
        return head;
    }
};