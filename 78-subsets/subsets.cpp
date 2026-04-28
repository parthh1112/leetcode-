class Solution {
public:
    void f(vector<int> &nums,int size,int take,vector<int> add,vector<vector<int>> &ans){
        if(take == nums.size()){
            ans.push_back(add);
            return ;
        }
        add.push_back(nums[take]);
        f(nums,size+1,take+1,add,ans);
        add.pop_back();
        f(nums,size,take+1,add,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        f(nums,0,0,{},ans);
        return ans;
    }
};