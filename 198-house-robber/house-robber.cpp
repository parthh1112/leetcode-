class Solution {
public:
    int f(int i, vector<int> &nums,vector<int> &dp){
        if(i >= nums.size())return 0;
        if(dp[i] != -1)return dp[i];
        int l = nums[i] + f(i + 2, nums,dp);
        int r = f(i + 1, nums,dp);
        return dp[i] =  max(l,r);
    }
       int raob(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        vector<int> dp(nums.size() , 0);
        dp[0] = nums[0];
        dp[1] = max(nums[1],nums[0]);
        int ans = max(dp[0],dp[1]);
        for(int i=2;i<nums.size();i++){
            int l = nums[i] + dp[i-2];
            int r = dp[i - 1];
            ans = max(l,r);
            dp[i] = ans;
        }
        return ans;
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];
        int prepre = nums[0], pre = max(nums[1],nums[0]), ans = max(prepre,pre);
        for(int i=2;i<nums.size();i++){ 
            ans = max(nums[i] + prepre,pre);
            prepre = pre;
            pre = ans;
        }
        return ans;
    }
};