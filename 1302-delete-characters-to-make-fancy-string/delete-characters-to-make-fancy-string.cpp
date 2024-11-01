class Solution {
public:
    string makeFancyString(string s) {
        if(s.size() < 3)return s;
        string ans = "";
        char a = s[0];
        char b = s[1];
        int  n = s.size();
        ans += a;
        ans += b;
        for(int i=2;i<n;i++){
            if(a == b && b == s[i]){

            }
            else{
                ans += s[i];
            }
            a = b;
            b = s[i];
        }
        return ans;
    }
};