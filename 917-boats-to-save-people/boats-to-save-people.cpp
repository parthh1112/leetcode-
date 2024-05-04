class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        int ans = 0;
        sort(p.begin(),p.end());

        int s = 0, e = p.size()-1;
        while(s <= e){
            int sum = p[s] + p[e];
            if(sum <= l){
                ans++;
                s++;
                e--;
            }
            else {
                ans++;
                e--;
            }
            
        }
        return ans;

    }
};