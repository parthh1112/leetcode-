class Solution {
public:
    string compressedString(string s) {
        string ans = "";
        s += '.';
        int cnt = 0;
        char c = s[0];
        for(int i=0;i<s.size();i++){
            if(c == s[i]){
                if(cnt == 9){
                    ans += '9';
                    ans += c;
                    cnt = 1;
                    c = s[i];
                }
                else{
                    cnt++;
                }
            }
            else {
                ans += (cnt + '0');
                ans += c;
                cnt = 1;
                c = s[i];
            }
        }
        return ans;        
    }
};