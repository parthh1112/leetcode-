class Solution {
public:
int lengthOfLIS(vector<int> &v)
{
    vector<vector<int>> dp(v.size() + 1, vector<int>(v.size() + 1, 0));
    for (int i = v.size() - 1; i >= 0; i--)
    {
        for (int pre = v.size() - 1; pre >= -1; pre--)
        {
            if (pre == -1 || v[pre] < v[i])
                dp[i][pre + 1] = max(dp[i + 1][pre + 1], dp[i + 1][i + 1] + 1);
            else
                dp[i][pre + 1] = dp[i + 1][pre + 1];
        }
    } 
    return dp[0][0];
}
 
};