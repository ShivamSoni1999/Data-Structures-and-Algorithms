struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    for(int i=0; i<n; i++) fast = fast->next;
    if(!fast) return head->next;
    
    while(fast->next){
        fast = fast->next;
        slow = slow->next;
    }
    
    struct ListNode* q = slow->next;
    slow->next = slow->next->next;
    free(q);
    
    return head;
}