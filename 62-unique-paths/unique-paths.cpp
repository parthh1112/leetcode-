class Solution {
public:
    int f(int m,int n,int i,int j,vector<vector<int>> &d){
        if(i == m || j == n)return 0;
        if(i == m - 1 && j == n - 1)return 1;
        if(d[i][j] != -1)return d[i][j];
        int bottom = f(m,n,i+1,j,d);
        int right = f(m,n,i,j+1,d);
        return d[i][j] = bottom + right;
    }
    int uniquePaths1(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1)); 
        return f(m,n,0,0,dp);     
        // (0,0) => 
        // (1,0) (0,1) => 
        // (2,0) (1,1) (1,1) (0,2) => 
        // (3,0) (2,1) (2,1) (1,2) (2,1) (1,2) (1,2) (0,3) =>
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,0)); 
        for(int j = 0; j < n; j++) dp[0][j] = 1;
        for(int i = 0; i < m; i++) dp[i][0] = 1;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                int bottom = dp[i-1][j];
                int right = dp[i][j-1];
                dp[i][j] = right + bottom;
            }
        }
        return dp[m-1][n-1];
    }
};