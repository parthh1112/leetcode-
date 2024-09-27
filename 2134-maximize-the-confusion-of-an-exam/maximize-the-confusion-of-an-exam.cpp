class Solution {
public:
    int findans(string s, int k) {
        int ans = 0, i = 0, j = 0, cnt = 0, n = s.size(), t = 0, f = 0;
        while(i < n){
            if(s[i] == 'T')t++;
            else f++;
            int minn = min(t,f); 
            if(minn > k){
                ans = max(ans,i - j);
                while(j < i){
                    if(t == minn - 1)break;
                    if(f == minn - 1)break;
                    if(s[j] == 'T')t--;
                    else f--;
                    j++;                    
                }  
            }  
            i++;
        }
        return ans == 0 ? n : ans;
    }
    int maxConsecutiveAnswers(string s, int k){
        int x = findans(s,k);
        reverse(s.begin(),s.end());
        int y = findans(s,k);
        return max(x,y);
    }
};