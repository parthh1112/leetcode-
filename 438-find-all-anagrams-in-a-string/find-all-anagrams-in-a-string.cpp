class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size(), i = 0;
        if(m > n)return {};
        vector<int> ans;
        vector<int> v(26,0);
        while(i < m){
            v[p[i] - 'a']++;
            i++;
        }
        i = 0;
        vector<int> c(26,0);
        while(i < m){
            c[s[i] - 'a']++;
            i++;
        }
        if(c == v){
            ans.push_back(0);
        }
        int j = 0;
        while(i < n){
            c[s[i] - 'a']++;
            c[s[j] - 'a']--;
            if(c == v){
                ans.push_back(j+1);
            }
            j++;
            i++;
        }
        
        return ans;
    }
};