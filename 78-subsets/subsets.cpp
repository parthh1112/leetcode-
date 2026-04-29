class Solution {
public:
    void f(vector<int> &v,int i,vector<int> help,vector<vector<int>> &ans){
        if(i == v.size()){
            ans.push_back(help);
            return ;
        }
        f(v,i+1,help,ans);
        help.push_back(v[i]);
        f(v,i+1,help,ans);
        help.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& v) {
        vector<vector<int>>  ans;
        f(v,0,{},ans);
        return ans;
    }
};