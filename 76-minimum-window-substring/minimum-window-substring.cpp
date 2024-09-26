class Solution {
public: 
    string minWindow(string s, string t) { 
        int lAns = INT_MAX, tCnt = 0, i = 0, j = 0, n = s.size(), m = t.size(), fl = -1, fr = -1;
        if(m > n) return "";
        vector<int> hash(256, 0), data(256, 0); 
        for(auto c : t) hash[c]++;
        int cnt = 0; 
        for(int i = 0; i < 256; i++){
            if(hash[i] > 0) cnt++;
        }          
        string ans = ""; 
        while(i < n){ 
            if(hash[s[i]] > 0){
                data[s[i]]++;
                if(data[s[i]] == hash[s[i]]) tCnt++;
            } 
            while(tCnt == cnt){
                if(i - j + 1 < lAns){
                    fl = j;
                    fr = i; 
                    lAns = i - j + 1;
                } 
                if(hash[s[j]] > 0){
                    data[s[j]]--;
                    if(data[s[j]] < hash[s[j]]) tCnt--;
                }
                j++;
            }            
            i++;
        } 
        if(fl == -1 || fr == -1) return "";
        return s.substr(fl, fr - fl + 1);
    }
};
