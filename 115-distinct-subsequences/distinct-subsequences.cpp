#define MOD 1000000007
class Solution {
public:
    int numDistinct(string &a, string &b){
        vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));
        for (int i = 0; i < a.size(); i++)dp[i][0] = 1;
        for (int i = 1; i <= a.size(); i++){
            for (int j = 1; j <= b.size(); j++){
                if (a[i - 1] == b[j - 1])dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j])%MOD;
                else dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[a.size()][b.size()];
    }
};