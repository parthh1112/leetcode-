class Solution {
public: 
    int climbStairs(int n) {
        int pre = 1;
        int ctr = 2;
        if(n == 1 || n == 2)return n;
        for(int i=3;i<n+1;i++){
            int h = pre + ctr;

            pre = ctr;
            ctr = h;
        }
        return ctr;
    }
};