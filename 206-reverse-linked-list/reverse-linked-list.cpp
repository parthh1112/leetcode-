class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head -> next)return head;
        ListNode *temp = head;
        ListNode *pre = nullptr;
        while(temp){  
            ListNode *x = temp -> next;
            temp -> next = pre;
            pre = temp;
            temp = x;
        }
        return pre;
    }
};