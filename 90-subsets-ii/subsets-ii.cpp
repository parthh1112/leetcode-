class Solution {
public:
    void f(vector<int> &nums,int ind,vector<int> help,vector<vector<int>> &ans){
        ans.push_back(help); 
        for(int i=ind;i<nums.size();i++){
            if(i != ind && nums[i] == nums[i-1])continue;
            help.push_back(nums[i]);
            f(nums,i+1,help,ans);
            help.pop_back(); 
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        f(nums,0,{},ans);
        return ans;        
    }
};