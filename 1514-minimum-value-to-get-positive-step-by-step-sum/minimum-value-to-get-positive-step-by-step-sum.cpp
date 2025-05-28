class Solution {
public:
    int minStartValue(vector<int>& v) { 
        int sum = 0, i = 0, n = v.size();
        int ans = 0;
        while(i < n){
            sum += v[i];
            if(sum < 1){
                ans += (abs(sum) + 1);
                sum = 1;
            }
            i++;
        }
        return ans == 0 ? 1 : ans;
    }
};