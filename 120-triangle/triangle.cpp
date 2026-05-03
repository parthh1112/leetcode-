class Solution {
public: 
    int minimumTotal(vector<vector<int>>& t) { 
        for(int i = t.size() - 2; i >= 0; i--){
            for(int j = 0; j < t[i].size(); j++){
                int one = t[i + 1][j] + t[i][j];
                int second = t[i + 1][j + 1] + t[i][j];
                t[i][j] = min(one,second);
            }
        }
        return t[0][0];
    }
};