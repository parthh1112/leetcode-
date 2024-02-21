class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        unordered_map<int,int> help;
        for(int i=0;i<v.size();i++){
            if(help.find(t-v[i]) != help.end()) return {i,help[t-v[i]]};
            help[v[i]] = i;
        }
        return {};
    }
};