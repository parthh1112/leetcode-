class Solution {
public:
    void f(vector<int> &v,int i,vector<int> help,vector<vector<int>> &ans){
        if(i >= v.size()){
            ans.push_back(help);
            return ;
        }
        help.push_back(v[i]);
        f(v, i+1, help, ans);
        help.pop_back(); 
        int j = i;
        while(j + 1 < v.size() && v[j] == v[j+1]) j++; 
        f(v, j+1, help, ans); 
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