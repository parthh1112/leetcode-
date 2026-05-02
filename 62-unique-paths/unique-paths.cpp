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
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,-1)); 
        return f(m,n,0,0,dp);     
        // (0,0) => 
        // (1,0) (0,1) => 
        // (2,0) (1,1) (1,1) (0,2) => 
        // (3,0) (2,1) (2,1) (1,2) (2,1) (1,2) (1,2) (0,3) =>
    }
};