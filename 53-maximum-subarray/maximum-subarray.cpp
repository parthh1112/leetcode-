class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum = 0;int n = v.size();
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            sum += v[i];
            ans = max(ans,sum);
            if(sum < 0)sum = 0;
        }
        return ans;
    }
};