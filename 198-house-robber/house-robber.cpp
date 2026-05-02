class Solution {
public:
    int f(int i, vector<int> &nums,vector<int> &dp){
        if(i >= nums.size())return 0;
        if(dp[i] != -1)return dp[i];
        int l = nums[i] + f(i + 2, nums,dp);
        int r = f(i + 1, nums,dp);
        return dp[i] =  max(l,r);
    }
    int rob(vector<int>& nums) {
        vector<int> m(nums.size() , -1);
        return f(0,nums,m);
    }
};