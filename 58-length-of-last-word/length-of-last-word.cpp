class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int i = s.size() - 1;
        while(i > -1 && s[i] == ' ')i--;
        while(i > -1 && s[i] != ' ')i--,ans++;       
        return ans;        
    }
};