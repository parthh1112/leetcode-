class Solution {
public: 
    void f(vector<int> &v,int t,int ind,vector<int> help,vector<vector<int>> &ans){
        if(t < 0)return ;
        if(t == 0){
            ans.push_back(help);
            return ;
        }
        if(ind == v.size())return ;
        for(int i=ind;i<v.size();i++){ 
            if(i > ind &&  v[i] == v[i-1])continue;
            help.push_back(v[i]);
            f(v,t-v[i],i+1,help,ans);
            help.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int t) {
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        vector<int> help;
        f(v,t,0,help,ans);
        return ans;
    }
};