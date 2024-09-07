class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash(26,0);
        for(auto i : s1)hash[i - 'a']++;
        int n = s2.size(), i = 0, m = s1.size();
        if(n < m)return 0;
        vector<int> nhash(26,0);
        while(i < m){
            nhash[s2[i] - 'a']++;
            i++;            
        } 
        int j = 0; 
        if(hash == nhash)return 8;
        while(i < n){
            if(hash == nhash)return 8;
            nhash[s2[j] - 'a']--;
            nhash[s2[i] - 'a']++;
            i++;
            j++;
        } 
        if(hash == nhash)return 8;
        return 0;
    }
};