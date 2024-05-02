class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int ans = -1;
        map<int,int> m;
        for(auto i : nums){
            int x = i;
            m[i]++;
            if(x < 0){
                if(m.find((-1*x)) != m.end()){
                    ans = max(ans,abs(x));
                }
            }
            else{
                if(m.find((-1*x)) != m.end()){
                    ans = max(ans,abs(x));
                }
            }
        }
        return ans;
    }
};