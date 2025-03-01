class Solution {
public:
    vector<int> applyOperations(vector<int>& v) {
        
        int n = v.size();
        for(int i=0;i<n-1;i++){
            if(v[i] == v[i+1]){
                v[i] *= 2;
                v[i+1] = 0;
            }
        }
        vector<int> ans(n,0);
        int a = 0;
        for(int i=0;i<n;i++){
            if(v[i]!=0)ans[a++] = v[i];
        }
        return ans;
    }
};