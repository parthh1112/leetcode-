class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, n = nums.size(); 
        if(n == 1 || (n > 1 && nums[0] > nums[1]))return 0;
        else if(n > 1 && nums[n - 1] > nums[n - 2])return n-1;
        l = 1;
        r = n - 2;
        while(l <= r){
            int mid = l + ((r - l) / 2);
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])return mid;
            else if(nums[mid] > nums[mid - 1]){
                l = mid + 1;
            }
            else r = mid - 1;
        } 
        return -1;
    }
};