class Solution {
public:
    int findans(int i, int buy, vector<int> &v,vector<vector<int>>& dp){
        if (i >= v.size()) return 0;
        if(dp[i][buy] != -1) return dp[i][buy];
        if (buy) return dp[i][buy] = max(findans(i + 1, 0, v,dp) - v[i], findans(i + 1, 1, v,dp));
        else return dp[i][buy] = max(findans(i + 2, 1, v,dp) + v[i], findans(i + 1, 0, v,dp));
    }
    int maxProfit(vector<int> &v){
        vector<vector<int>> dp(5001,vector<int>(2,-1));
        return findans(0, 1, v,dp);
    }
};