class Solution {
public:
    int length(ListNode *head){
        int cnt = 0;
        while(head){
            head = head -> next;
            cnt++;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = length(head);
        int d = l - n - 1;
        if(d == -1)return head -> next;
        ListNode *t = head;
        while(d){
            t = t -> next;
            d--;
        }
        t -> next = t -> next -> next;
        return head;
    }
};