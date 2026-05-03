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
        vector<int> d;
        d = g[g.size() - 1];
        for(int i = g.size() - 2; i > -1; i--){
            vector<int> c (g.size(), -1);
            for(int j = 0; j < g.size(); j++){
                int bl = INT_MAX, bb = INT_MAX, br = INT_MAX;
                if(j - 1 < g.size()) bl = d[j - 1] + g[i][j];
                bb = d[j] + g[i][j];
                if(j + 1 < g.size()) br = d[j + 1] + g[i][j];
                c[j] = min(bl,min(br,bb));
            }
            d = c;
        }
        for(auto i : d) ans = min(ans, i);
        return ans;
    }
};