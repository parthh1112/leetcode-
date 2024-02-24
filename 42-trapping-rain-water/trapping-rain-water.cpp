class Solution {
public:
    int trap(vector<int>& v) {
        int ans = 0;
        vector<int> lm(v.size(),-1);
        vector<int> rm(v.size(),-1);
        int maxx = INT_MIN;
        for(int i=0;i<v.size();i++){
            if(maxx < v[i]){
                maxx = v[i];
            }
            lm[i] = maxx;
        }
        maxx = INT_MIN;
        for(int i=v.size()-1;i>=0;i--){
            if(maxx < v[i]){
                maxx = v[i];
            }
            rm[i] = maxx;
        }
        for(int i=0;i<v.size();i++){
            int minn = min(lm[i],rm[i]);
            int hans = minn - v[i];
            ans += hans;
        }
        return ans;

        
    }
};