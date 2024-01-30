class Solution {
public:
int findans(int i, bool buy, int no, vector<int> &v, vector<vector<vector<int>>> &dp){ 
    if (i == v.size() || no == 0)return 0;
    if (dp[i][buy][no] != -1)return dp[i][buy][no];
    if (buy)return dp[i][buy][no] = max(findans(i + 1, 0, no, v, dp) - v[i], findans(i + 1, 1, no, v, dp));
    else return dp[i][buy][no] = max(findans(i + 1, 1, no - 1, v, dp) + v[i], findans(i + 1, 0, no, v, dp));
}
int maxProfit(int k,vector<int> &v){ 
    vector<vector<vector<int>>> dp(v.size() + 1, vector<vector<int>>(2, vector<int>(k+1, -1)));
    return findans(0, 1, k, v, dp);
}
};