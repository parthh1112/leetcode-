class Solution {
public:
    int takeCharacters(string s, int k) {
        int ans = -1;
        int a = 0, b = 0, c = 0;
        for(auto i : s){
            if(i == 'a')a++;
            else if(i == 'b')b++;
            else c++;
        }
        a -= k;
        b -= k;
        c -= k;
        int l = 0,r=0,n=s.size();
        int i =0 ,j=0,m=0;
        if(a == 0 && b == 0 && c == 0)return n;
        if(a < 0 || b < 0 || c < 0)return -1;
        while(r < n){
            if(s[r] == 'a')i++;
            else if(s[r] == 'b')j++;
            else m++;

            if(i <= a && j <= b && m <= c){ 
                ans = max(ans,(r-l));
            }
            else{
                if(s[l] == 'a')i--;
                else if(s[l] == 'b')j--;
                else m--;
                l++;
            }
            r++;
        }
        if(ans == -1)return -1;
        return n-ans-1;
    }
};