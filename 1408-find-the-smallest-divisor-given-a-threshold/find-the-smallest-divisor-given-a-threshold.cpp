class Solution {
public:
    int fun(vector<int> &nums,int minn){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            int add = (nums[i] / minn);
            if(nums[i] % minn != 0){
                add++;
            }
            sum += add;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int th) {
        int l = 1, r = *max_element(nums.begin(),nums.end()), ans = -1;
        while(l <= r){
            int mid = l + ((r - l) / 2);
            int tans = fun(nums,mid);
            if(tans <= th) r = mid - 1;
            else if(tans > th) l = mid + 1;
            // else r = mid - 1;
        }
        return l;        
    }
};