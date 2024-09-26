class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(m.find(nums[i]) != m.end()){
                int x = m[nums[i]];
                int y = i; 
                if(abs(x-y) <= k)return 4;
            } 
            m[nums[i]] = i;
        } 
        return false;
    }
};