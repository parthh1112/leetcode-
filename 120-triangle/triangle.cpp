#define ll long long int
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
class Solution {
public:
int minimumTotal(vvi &v)
{ 
    vvi dp(v.size(), vi(v[v.size() - 1].size(), 0));
    dp[v.size() - 1] = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            ll l = v[i][j] + dp[i + 1][j];
            ll r = v[i][j] + dp[i + 1][j + 1];
            dp[i][j] = min(l, r);
        }
    }
    return dp[0][0];
}
};