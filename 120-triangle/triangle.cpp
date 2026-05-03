class Solution {
public:
    int f(int  row, int i, vector<vector<int>> &t,vector<vector<int>> &d){
        if(row == t.size() - 1)return t[t.size() - 1][i];
        if(d[row][i] != -1)return d[row][i];
        int one = f(row + 1, i ,t, d) + t[row][i];
        int second = f(row + 1, i + 1, t, d) + t[row][i]; 
        return d[row][i] =  min(one,second);
    }
    int minimumTotal(vector<vector<int>>& t) {
        vector<vector<int>> d(t.size(), vector<int> (t.size(), -1));
        d[t.size() - 1] = t[t.size() - 1]; 
        for(int i = t.size() - 2; i >= 0; i--){
            for(int j = 0; j < t[i].size(); j++){
                int one = d[i + 1][j] + t[i][j];
                int second = d[i + 1][j + 1] + t[i][j];
                d[i][j] = min(one,second);
            }
        }
        return d[0][0];
    }
};