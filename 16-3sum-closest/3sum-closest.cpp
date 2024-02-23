class Solution {
public:
    int threeSumClosest(vector<int>& v, int t) {
        vector<int> help;
        int ans = INT_MAX;int fans = INT_MIN;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int j = i + 1;
            int k = v.size()-1;
            while(j < k){
                int sum = (v[i] + v[j] + v[k]);
                int dist = abs(t - sum);
                if(ans > dist){
                    ans = dist;
                    fans = sum;
                }
                if(sum < t){
                    j++;
                }
                else {
                    k--;
                }
            }
        } 
        return fans;
    }
};