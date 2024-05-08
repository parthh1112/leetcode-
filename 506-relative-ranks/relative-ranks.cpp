class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> p;
        int j = 0;
        for(auto i : score){
            p.push({i,j});
            j++;
        }
        vector<string> ans(score.size(),"");
        int i = 0;
        while(!p.empty()){
            if(i == 0)ans[p.top().second] = "Gold Medal";
            else if(i == 1)ans[p.top().second] = "Silver Medal";
            else if(i == 2)ans[p.top().second] = "Bronze Medal";
            else ans[p.top().second] = to_string(i+1);
            p.pop();
            i++;
        }
        return ans;
    }
};