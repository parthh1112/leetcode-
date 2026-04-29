class Solution {
public:
    void f(vector<int> &v,int i,vector<int> help,vector<vector<int>> &ans){
        if(i == v.size()){
            ans.push_back(help);
            return ;
        }
        help.push_back(v[i]);
        f(v,i+1,help,ans);
        help.pop_back();
        while(i < v.size() - 1 && v[i] == v[i+1])i++;
        f(v,i+1,help,ans);
    }
    vector<vector<int>> subsets(vector<int>& v) {sort(v.begin(),v.end());
        vector<vector<int>>  ans;
        f(v,0,{},ans);
        return ans;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        return subsets(v); 
    }
};