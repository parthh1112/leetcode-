class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int i = 0, j = 0, n = s.size();
        map<char,int> m;
        while(i < n){
            m[s[i]]++;
            if(m[s[i]] > 1){
                while(j < i){
                    m[s[j]]--;
                    if(s[j] == s[i]){
                        if(m[s[j]] == 0)m.erase(s[j]);
                        j++;
                        break;
                    }
                    if(m[s[j]] == 0)m.erase(s[j]);
                    j++;
                }
            }
            ans = max(ans,i - j + 1);
            i++;
        }
        return ans;
    }
};