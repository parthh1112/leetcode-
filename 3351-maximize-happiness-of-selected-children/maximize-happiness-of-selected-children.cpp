class Solution {
public:
    long long maximumHappinessSum(vector<int>&h, int k) {
        long long int ans = 0;
        sort(h.begin(),h.end());
        int t = k;
        int i = h.size() - 1;
        int y = 0;
        while(k--){
            ans += (max(0,h[i]-y));y++;
            i--;
        }
        // ans = ans - k + 1;
        return ans;
    }
};