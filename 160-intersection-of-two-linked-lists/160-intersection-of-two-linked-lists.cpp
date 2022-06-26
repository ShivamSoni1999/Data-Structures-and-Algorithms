//Adobe Amazon D-E-Shaw Flipkart Goldman Sachs MakeMyTrip Microsoft Qualcomm Visa VMWare
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
            
        ListNode *a = headA;
        ListNode *b = headB;
        
        while(a!=b) //keep on traversing until both of them are equal
        {
            if(a==NULL) 
                a=headB;   //if a reaches null make it point to other lists head 
            else
            a=a->next;           //otherwise  keep on moving..
            
            if(b==NULL) 
                b=headA;  
            else
                b=b->next;    
        }
        
        return a;       //If a==b then the then it means both standing on intersection or null
        
       
    }
};