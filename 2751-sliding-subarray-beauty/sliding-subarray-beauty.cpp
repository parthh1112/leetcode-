class Solution {
public:
    void findans(vector<int> &v,int &k,int &x,vector<int> &ans){
        map<int,int> m;
        int i = 0, j = 0, n = v.size();
        while(i < k) m[v[i++]]++;
        int h = 0;
        for(auto i : m){
            h += i.second;
            if(h >= x){
                ans[0] = min(ans[0],i.first);
                m[v[0]]--;
                if(m[v[0]] == 0)m.erase(v[0]);
                break;
            }
        }
        j = 1;






        while(i < n){
            m[v[i]]++;
            int h = 0;
            for(auto i : m){
                h += i.second;
                if(h >= x){
                    ans[j] = min(ans[j],i.first);
                    m[v[j]]--;
                    if(m[v[j]] == 0)m.erase(m[v[j]]);
                    break;
                }
            }   
            j++;
            i++;
        }

    }
    vector<int> getSubarrayBeauty(vector<int>& v, int k, int x) {
        int n = v.size();
        vector<int> ans(n - k + 1, 0);
        findans(v,k,x,ans);
        reverse(v.begin(),v.end());
        reverse(ans.begin(),ans.end());
        findans(v,k,x,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};