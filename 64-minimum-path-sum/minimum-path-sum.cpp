class Solution {
public:
    int f(int i, int j, vector<vector<int>> &g, vector<vector<int>>&d){
        if(i < 0 || j < 0) return INT_MAX - 200;
        if(i == 0 && j == 0){
            return g[0][0];
        } 
        if(d[i][j] != -1)return d[i][j];
        int up = f(i - 1, j, g, d) + g[i][j];
        int left = f(i, j - 1, g, d) + g[i][j]; 
        return d[i][j] = min(left, up);
    }
    int minPathSum(vector<vector<int>>& g) {
        vector<vector<int>> d(g.size(),vector<int> (g[0].size(), -1));
        return f(g.size() - 1, g[0].size() - 1, g, d);
    }
};