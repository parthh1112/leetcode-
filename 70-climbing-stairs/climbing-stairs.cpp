class Solution {
public: 
vector<int> m;
    int climbStair(int n,vector<int> &m) {
        if(n == 0)return 1;
        if(n < 0)return 0;
        if(m[n-1] != -1)return m[n-1];
        return m[n-1] = climbStair(n-1,m) + climbStair(n-2,m);
    }
    int climbStairs(int n){
        vector<int> m(n,-1);
        return climbStair(n,m);
    }
};