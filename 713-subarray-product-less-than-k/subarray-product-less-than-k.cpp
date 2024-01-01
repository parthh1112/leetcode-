class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0 || k == 1)return 0;
        int i=0,j=0,p=1,ans=0;
        while(j < nums.size()){
            p *= nums[j];
            while(p >= k){
                p /= nums[i];
                i++;
            }
            ans += j - i + 1;
            j++;
        }
        return ans;
    }
};