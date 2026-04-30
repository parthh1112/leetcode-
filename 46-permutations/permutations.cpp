class Solution {
public:
    void f(vector<int> &nums,set<int> &help,vector<int> &a,vector<vector<int>> &ans){
        if(help.size() == nums.size()){ 
            ans.push_back(a);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(!help.contains(nums[i])){
                help.insert(nums[i]);
                a.push_back(nums[i]);
                f(nums,help,a,ans);
                a.pop_back();
                help.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        set<int> help;
        vector<int> a;
        f(nums,help,a,ans);
        return ans;
    }
};