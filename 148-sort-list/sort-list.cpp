class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head)return head;
        vector<int> x;
        ListNode *t = head;
        while(t){
            x.push_back(t->val);
            t = t -> next;
        }
        sort(x.begin(),x.end());
        t = head;
        int i = 0;
        while(t){
            t -> val = x[i++];
            t = t -> next;
        }
        return head;
    }
};