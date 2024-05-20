class Solution {
public:
    void findans(vector<int> &v,int x,int i,int &ans){
        if(i == v.size()){
            ans += x;
            return ;}
        findans(v,x^v[i],i+1,ans);
        findans(v,x,i+1,ans);
    }
    int subsetXORSum(vector<int>& v) {
        int ans = 0;
        int x = 0;
        int i = 0;
        findans(v,x,i,ans);
        return ans;
    }
};