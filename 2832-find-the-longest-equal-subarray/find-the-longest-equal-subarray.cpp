class Solution {
public:
    int longestEqualSubarray(vector<int>& v, int k) {
        int l = 0, r = 0,n = v.size(),maxx = 0;
        unordered_map<int,int> m;
        while(r < n){
            m[v[r]]++;
            maxx = max(maxx,m[v[r]]);
            if(((r - l) - maxx) >= k){
                m[v[l]]--;
                l++;
            }
            r++;
        }
        return maxx;
    }
};