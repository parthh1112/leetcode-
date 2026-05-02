class Solution {
public:
    int f(int i, int j, vector<vector<int>>& g, vector<vector<int>> &dp){
        if(i == 0 && j == 0) return 1;
        if(i < 0 || j < 0 || g[i][j] == 1) return 0; 
        if(dp[i][j] != -1) return dp[i][j];
        int up = f(i - 1, j, g, dp);
        int left = f(i, j - 1, g, dp);
        return dp[i][j] = up + left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        if(g[0][0] == 1 || g[g.size() - 1][g[0].size() - 1])return 0;
        vector<vector<int>> dp(g.size(),vector<int> (g[0].size(), 0));
        dp[0][0] = 1;
        for(int i = 0; i < g.size(); i++){
            for(int j = 0; j < g[0].size(); j++){
                if(i == 0 && j == 0)continue;
                int up = 0, left = 0;
                if(i > 0 && g[i][j] != 1) up = dp[i - 1][j];
                if(j > 0 && g[i][j] != 1) left = dp[i][j - 1];
                dp[i][j] = up + left;
            }
        }
        return dp[g.size() - 1][g[0].size() - 1];
    }
};