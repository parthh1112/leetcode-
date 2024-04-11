
class Solution {
public:
    int length (ListNode *&l){
        int cnt = 0;
        ListNode *t = l;
        while(t){ 
            t = t->next;
            cnt++;
        }
        return cnt;
    }
    void addZero(ListNode *&l,int cnt){
        ListNode *add = new ListNode(0);
        ListNode *b = add;
        cnt--;
        while(cnt > 0){
            cnt--;
            ListNode *n = new ListNode(0);
            add -> next = n;
            add = n;
        }
        add -> next = l;
        l = b;
    }
    void addll(ListNode *&l1,ListNode *&l2,int& cnt){
        if(!l1 && !l2)return ;
        addll(l1->next,l2->next,cnt); 
        int sum = l1->val+l2->val+cnt;
        cnt = sum / 10;
        l1 -> val = sum % 10;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c1 = length(l1);
        int c2 = length(l2); 
        int l = abs(c1-c2);
        if(c1 > c2) addZero(l2,l);
        else if(c1 < c2) addZero(l1,l);
        int c = 0;
        addll(l1,l2,c);
        if(c){
            ListNode *n = new ListNode(1);
            n -> next = l1;
            l1 = n;
        }
        return l1;
        
    }
};