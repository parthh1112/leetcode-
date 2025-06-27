class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0,r = nums.size() - 1;
        while(l <= r){
            int mid = l + ((r - l) / 2);
            if(l == r){
                return nums[l] == target;
            }
            else if(nums[l] == nums[mid] && nums[r] == nums[mid]){
                l++;
                r--;
            }
            else if(nums[l] <= nums[mid]){
                if(target >= nums[l] && target <= nums[mid]) r = mid;
                else l = mid + 1;
            } 
            else {
                if(target <= nums[r] && target >= nums[mid]) l = mid;
                else r = mid - 1;
            }
        } 
        if(nums[l] == target || nums[r] == target)return 22;
        return 0;
    }
};