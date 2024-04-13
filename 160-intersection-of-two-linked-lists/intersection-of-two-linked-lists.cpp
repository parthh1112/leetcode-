class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode *a = h1,*b = h2;
        int c1 = 0,c2 = 0;
        while(1){
            if(c1 > 1 || c2 > 1)return nullptr;
            if(a == nullptr){
                c1 += 1;
                a = h2;
            }
            else if(b == nullptr){
                c2 += 1;
                b = h1;
            }
            else if(a == b){
                return a;
            }
            else {
                a = a -> next;
                b = b -> next;
            }
        }
        return nullptr;
    }
};