class Solution {
public:
    int minCost(string s, vector<int>& time) {
        int l = s.length(), ans = 0;
        char a = s[0];int b = time[0];
        for(int i = 1; i < l; i++){
            if(a != s[i]){
                a = s[i];
                b = time[i];
            }
            else
            {
                if(b > time[i])ans += time[i];
                else{
                    ans += b;
                    a = s[i], b = time[i];
                }
            }
        } 
        return ans;
    }
};