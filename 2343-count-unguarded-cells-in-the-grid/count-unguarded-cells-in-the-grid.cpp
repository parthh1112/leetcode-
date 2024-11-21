class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
        vector<vector<int>> v(m,vector<int> (n,0));
        for(auto i : w) v[i[0]][i[1]] = -1;
        for(auto i : g) v[i[0]][i[1]] = -1;
        
        for(auto i : g){
            int ii = i[0];
            int jj = i[1];
            v[ii][jj] = -1;
            for(int i=ii-1;i>=0;i--){
                if(v[i][jj] == -1)break;
                v[i][jj] = 1;
            }
            for(int i=ii+1;i<m;i++){
                if(v[i][jj] == -1)break;
                v[i][jj] = 1;
            }
            for(int j=jj-1;j>=0;j--){
                if(v[ii][j] == -1)break;
                v[ii][j] = 1;
            }
            for(int j=jj+1;j<n;j++){
                if(v[ii][j] == -1)break;
                v[ii][j] = 1;
            }
        }
        int ans = 0;
        for(auto i : v){
            for(auto j : i){
                if(j == 0)ans++;
            }
        }
    return ans;
    }
};