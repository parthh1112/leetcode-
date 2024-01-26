class Solution {
public:
#define MOD 1000000007 
int coinChange(vector<int> &v, int k){
    if (k == 0) return 0;
    if (v.size() == 1){
        int mo = k % v[0];
        if (mo == 0)return k / v[0];
        return -1;
    }
    vector<vector<int>> dp(v.size(), vector<int>(k + 1, 0)); 
    for(int t=0;t<k+1;t++){
        if(t%v[0] == 0) dp[0][t] = t/v[0];
        else dp[0][t] = 1e9;
    } 
    for(int i=1;i<v.size();i++){
        for(int j=0;j<k+1;j++){
            int take = 1e9, nottake = 1e9;
            if (v[i] <= j)take = 1 + dp[i][j-v[i]];//  findmincoins(i, k - v[i], v, dp);
            nottake = dp[i-1][j];// findmincoins(i - 1, k, v, dp);
            dp[i][j] = (min(take, nottake)) % MOD;
        }
    } 
    if(dp[v.size()-1][k] == 1e9)return -1;
    return dp[v.size()-1][k];
} 
};