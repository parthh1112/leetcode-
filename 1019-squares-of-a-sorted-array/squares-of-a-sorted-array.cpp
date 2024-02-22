class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        vector<int> ans;
        int i=0,j=v.size()-1;
        for(auto &i:v)i *= i;
        while(i<=j){
            if(v[i] < v[j]) ans.push_back(v[j--]);
            else ans.push_back(v[i++]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};