class Solution {
public:
    ListNode* reverseLL(ListNode *head){
        ListNode *temp = head;
        ListNode *pre = nullptr;
        ListNode *ans = head;
        while(temp){
            ans = temp;
            ListNode *next = temp -> next;
            temp -> next = pre;
            pre = temp;
            temp = next;
        }
        return ans;
    }
    ListNode* doubleLL(ListNode *&rList){
        int car = 0;
        ListNode *temp = rList;
        ListNode *ltemp = temp;
        while(temp){ 
            ltemp = temp;
            int d = (((temp -> val * 2) + car));
            temp -> val = d%10;
            if(d > 9)car = 1;
            else car = 0;
            temp = temp -> next;
        } 
        if(car){
            ListNode *n = new ListNode(1);
            ltemp -> next = n;
        }
        return rList;        
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode *rList = reverseLL(head);
        ListNode *dList = doubleLL(rList);
        return reverseLL(dList);
    }
};