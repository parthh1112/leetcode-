class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        if(k == 0 || k == 1)return 0;
        int add = 0;
        int ans = 0, mul = 1,n = v.size();
        for(int i=0;i<n;i++){
            mul *= v[i];
            while(mul >= k){ 
                mul /= v[add];
                add++;
            }
            ans += (i - add + 1);
        }
        return (ans<0?0:ans);
    }
}; 