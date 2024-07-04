class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* pre = head;
        int sum = 0;
        while(temp){
            if(temp->val != 0) sum += temp -> val;
            else{
                pre -> val = sum;
                if(temp->next) pre -> next = temp;
                else pre -> next = nullptr;
                sum = 0; 
                pre = pre -> next;
            }
            temp = temp -> next;
        }
        return head;
    }
};