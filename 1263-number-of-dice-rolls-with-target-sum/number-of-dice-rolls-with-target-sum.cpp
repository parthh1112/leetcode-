const int M = 1e9+7;
class Solution{
public: 
    int findans(int n, int k, int target,vector<vector<int>>&dp){
        if(n<=0) return 0;
        if(n==1 && target>=1 && target<=k) return 1;
        if(dp[n][target]!=-1) return dp[n][target];
        int ct=0;
        for(int i=1;i<=min(target-1, k);i++) 
            ct=(ct+findans(n-1,k,target-i,dp))%M;
        return dp[n][target]=ct;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return findans(n,k,target,dp);
    }
};