class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& v1, vector<vector<int>>& v2) {
        vector<vector<int>> ans;
        int s1 = 0, s2 = 0, l1 = v1.size(), l2 = v2.size();
        while(s1 < l1 && s2 < l2){
            if(v1[s1][0] < v2[s2][0]){
                ans.push_back({v1[s1]});
                s1++;
            }
            else if(v1[s1][0] > v2[s2][0]){
                ans.push_back({v2[s2]});
                s2++;
            }
            else{
                ans.push_back({v1[s1]});
                ans[ans.size()-1][1] += v2[s2][1];
                s1++;
                s2++;
            }
        }
        while(s1 < l1) ans.push_back({v1[s1++]});
        while(s2 < l2) ans.push_back({v2[s2++]});
        return ans;                
    }
};