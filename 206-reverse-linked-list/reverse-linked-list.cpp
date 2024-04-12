class Solution {
public:
    ListNode* reve(ListNode* head,ListNode* &temp){
        if(head == NULL){
            return nullptr;
        }
        ListNode *pre = head -> next;
        head -> next = temp;
        temp = head;
        ListNode* r = reve(pre,temp);
        return temp;

    }
    ListNode* reverseList(ListNode* head) {
        if(!head)return head;
        ListNode *temp = nullptr;
        return reve(head,temp);
    }
};