class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        unordered_map<int,int> help;
        vector<int> ans;
        for(int i=0;i<v.size();i++){
            if(help.find(t-v[i]) != help.end()){
                ans.push_back(i);
                ans.push_back(help[t-v[i]]);
                break;
            }
            help[v[i]] = i;
        }
        return ans;
    }
};