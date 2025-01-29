class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
        ListNode *pre = nullptr;
        while(temp){
            ListNode *add = temp -> next;
            temp -> next = pre;
            pre = temp;
            temp = add;            
        }
        return pre;
    }
};