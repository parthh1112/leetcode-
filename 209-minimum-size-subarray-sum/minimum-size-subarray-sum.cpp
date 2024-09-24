class Solution {
public:
    int minSubArrayLen(int t, vector<int>& v) {
        int ans = 10000000 ,i = 0, j = 0, sum = 0, n = v.size();
        while(i < n){
            sum += v[i];
            while(sum >= t && j < n){
                ans = min(ans,i - j);
                sum -= v[j];
                j++;
            }  
            i++;
        }
        return (ans == 10000000) ? 0 : ans+1;
    }
};