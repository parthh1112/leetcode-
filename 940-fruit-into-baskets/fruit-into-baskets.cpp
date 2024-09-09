class Solution {
public:
    int totalFruit(vector<int>& v) {
        int ans = 0, i = 0, j = 0, n = v.size();
        map<int,int> m;
        while(i < n){
            m[v[i]]++;
            if(m.size() > 2){
                int cnt = 0;
                ans = max(ans,i - j);
                while(j < i){
                    if(m[v[j]] != 0){
                        m[v[j]]--;
                    }
                    if(m[v[j]] == 0){
                        m.erase(v[j]);
                        j++;
                        break;
                    }
                    j++;
                }                
            }
            ans = max(ans,i - j);
            i++;
        }
        ans = max(ans,i - j);
        return ans;
    }
};