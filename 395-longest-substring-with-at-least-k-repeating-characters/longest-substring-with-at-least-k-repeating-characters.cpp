class Solution {
public: 
    int longestSubstring(string s, int k) {
        if(s.size() == 0 || k > s.size())return 0;
        string t = "";
        int ans = 0;
        unordered_map<char,int> u;
        for(auto &i : s)u[i]++;
        for(auto &i : s){
            if(u[i] < k){
                ans = max(ans,longestSubstring(t,k));
                t = "";
                continue;
            }
            t += i;
        }
        if(t == s) return t.size();
        ans = max(ans,longestSubstring(t,k));
        return ans;
    }
};