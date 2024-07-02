class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        vector<int> help(1001,0); 
        for(auto i : v2)help[i]++;
        vector<int> ans;
        for(auto i : v1){
            if(help[i]){
                ans.push_back(i);
                help[i]--;
            }
        }
        return ans;
    }
};