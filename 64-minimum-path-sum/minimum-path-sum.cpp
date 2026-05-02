class Solution {
public:
    long long int f(int i, int j, vector<vector<int>> &g, vector<vector<int>>&d){
        if(i < 0 || j < 0) return INT_MAX;
        if(i == 0 && j == 0){
            return g[0][0];
        } 
        if(d[i][j] != -1)return d[i][j];
        long long int up = f(i - 1, j, g, d) + g[i][j];
        long long int left = f(i, j - 1, g, d) + g[i][j]; 
        return d[i][j] = min(left, up);
    }
    int minPathSum(vector<vector<int>>& g) {
        vector<vector<int>> d(g.size(),vector<int> (g[0].size(), 0));
        d[0][0] = g[0][0];
        for(int i = 0; i < g.size(); i++){
            for(int j = 0; j < g[0].size(); j++){
                if(i == 0 && j == 0) continue;
                int up = INT_MAX, left = INT_MAX;
                if(i > 0) up = d[i - 1][j] + g[i][j];
                if(j > 0) left = d[i][j - 1] + g[i][j];
                d[i][j] = min(up, left);
            }
        }
        return d[g.size() - 1][g[0].size() - 1];
    }
};

