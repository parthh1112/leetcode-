class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1 = l1,*t2 = l2,*ans = new ListNode(0), *temp = ans;
        int car = 0;
        while(t1 || t2){
            int d1=0, d2=0;
            if(t1)d1 = t1 -> val;
            if(t2)d2 = t2 -> val;
            int sum = d1 + d2 + car;
            ListNode *node = new ListNode(sum % 10);
            temp -> next = node;
            temp = temp -> next;
            if(sum > 9)car = 1;
            else car = 0;
            if(t1)t1 = t1 -> next;
            if(t2)t2 = t2 -> next;
        }
        if(car){
            ListNode *node = new ListNode(1);
            temp -> next = node;
        }
        return ans->next;
    }
};