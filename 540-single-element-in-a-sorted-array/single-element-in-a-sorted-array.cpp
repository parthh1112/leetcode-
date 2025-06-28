class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = -1,l = 0,r = nums.size() - 1;
        while(l <= r){ 
            if(l == r) return nums[l];
            int mid = l + ((r - l) / 2);
            int left = mid - l;
            int right = r - mid; 
            if(mid >= 1 && nums[mid] == nums[mid-1]){
                left -= 1;
                if(left % 2 == 0) l = mid + 1;
                else r = mid - 2;
            }
            else if(mid >= 1 && nums[mid] == nums[mid+1]){
                right -= 1;
                if(right % 2 == 0) r = mid - 1;
                else l = mid + 2;
            }
            else return nums[mid];
        }
        return ans;
    }
};