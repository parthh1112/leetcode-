class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)return 0;
        ListNode *slow = head,*fast = head;
        while(1){
            slow = slow -> next;
            if(!fast || !fast -> next)return 0;
            fast = fast -> next -> next;
            if(fast == slow) break;
        }
        return 6;
    }
};