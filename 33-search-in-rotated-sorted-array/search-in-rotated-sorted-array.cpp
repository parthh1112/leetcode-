class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0,r = nums.size() - 1;
        while(l <= r){
            int mid = l + ((r - l) / 2);
            if(l == r){
                if(nums[l] != target)return -1;
                return l;
            }
            else if(nums[l] <= nums[mid]){
                if(target >= nums[l] && target <= nums[mid]){
                    r = mid;
                }
                else{
                    l = mid + 1;
                }
            } 
            else {
                if(target <= nums[r] && target >= nums[mid]){
                    l = mid;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        cout<<l<<" "<<r<<endl;
        return -1;
    }
};