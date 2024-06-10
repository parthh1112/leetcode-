class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> tempH(n,-1);
        for(int i=0;i<n;i++){
            tempH[i] = heights[i];
        }
        int ans = 0;
        sort(tempH.begin(),tempH.end());
        for(int i=0;i<n;i++){
            if(tempH[i] != heights[i])
                ans++;
        }
        return ans;
    }
};