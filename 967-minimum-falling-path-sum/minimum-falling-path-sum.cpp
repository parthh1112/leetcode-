class Solution {
public:
    int f(int i, int j, vector<vector<int>> &g, vector<vector<int>> &d){   
        if(i == g.size() - 1)return g[i][j];
        int bl = INT_MAX, bb = INT_MAX, br = INT_MAX;
        if(d[i][j] != -1)return d[i][j];
        if(j - 1 < g.size() && i + 1 < g.size()) bl = f(i + 1, j - 1, g, d) + g[i][j];
        if(j < g.size() && i + 1 < g.size())     bb = f(i + 1, j, g, d)     + g[i][j];
        if(j + 1 < g.size() && i + 1 < g.size()) br = f(i + 1, j + 1, g, d) + g[i][j];
        return d[i][j] = min(bl,min(bb,br)); 
    }
    int minFallingPathSum(vector<vector<int>>& g) {
        int ans = INT_MAX, i = 0, j = 0;
        vector<vector<int>> d(g.size(), vector<int> (g.size(), 0));
        d[g.size() - 1] = g[g.size() - 1];
        for(int i = g.size() - 2; i > -1; i--){
            for(int j = 0; j < g.size(); j++){
                int bl = INT_MAX, bb = INT_MAX, br = INT_MAX;
                if(j - 1 < g.size()) bl = d[i + 1][j - 1] + g[i][j];
                bb = d[i + 1][j] + g[i][j];
                if(j + 1 < g.size()) br = d[i + 1][j + 1] + g[i][j];
                d[i][j] = min(bl,min(br,bb));
            }
        }
        for(auto i : d[0]) ans = min(ans, i);
        return ans;
    }
};