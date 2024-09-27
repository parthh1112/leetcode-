class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int ans = -1, i = 0, j = 0, n = v.size(), cnt = 0;
        while(i < n){
            if(v[i] == 0) cnt++;
            if(cnt == 2){
                ans = max((i - j - 1),ans);
                while(v[j] != 0) j++;
                cnt = 1;
                j++;
            }
            i++;
        }
        if(cnt == 1) ans = max((i - j - 1),ans); 
        return ans == -1 ? n-1 : ans;
    }
};