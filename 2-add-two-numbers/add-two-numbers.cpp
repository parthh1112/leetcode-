class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1 = l1,*t2 = l2;
        ListNode *ans = new ListNode(0);
        ListNode *temp = ans;
        int car = 0;
        while(t1 && t2){
            int d1 = t1 -> val,d2 = t2 -> val;
            int sum = d1 + d2 + car;
            ListNode *node = new ListNode(0);
            node -> val = (sum % 10);
            temp -> next = node;
            temp = temp -> next;
            if(sum > 9)car = 1;
            else car = 0;
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        while(t1){
            int d = t1 -> val + car;
            ListNode *node = new ListNode(0);
            node -> val = (d % 10);
            temp -> next = node;
            temp = temp -> next;
            if(d > 9)car = 1;
            else car = 0;
            t1 = t1 -> next; 
        }
        while(t2){
            int d = t2 -> val + car;
            ListNode *node = new ListNode(0);
            node -> val = (d % 10);
            temp -> next = node;
            temp = temp -> next;
            if(d > 9)car = 1;
            else car = 0; 
            t2 = t2 -> next;
        }
        if(car){
            ListNode *node = new ListNode(1);
            temp -> next = node;
        }
        return ans->next;
    }
};