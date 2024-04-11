class Solution {
public:
    ListNode* reverseList(ListNode* h) {
        if(h == NULL)return NULL;
        ListNode *t = h,*n=h->next;
        t -> next = NULL;
        while(n){
            ListNode *q = n -> next;
            n -> next = t;
            t = n;
            n = q;
        }
        return t;        
    }
};