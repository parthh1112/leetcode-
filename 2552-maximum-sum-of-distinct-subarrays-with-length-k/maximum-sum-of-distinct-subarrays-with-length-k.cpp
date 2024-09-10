class Solution {
public:
    long long maximumSubarraySum(vector<int>& v, int k) {
        long long int ans = 0;
        map<int,int> m;
        int i = 0, j = 0, n = v.size();long long int sum = 0;
        while(i < k) sum += v[i],m[v[i++]]++;
        if(m.size() == k)ans = max(ans,sum);
        while(i < n){
            m[v[j]]--;
            sum -= v[j];
            if(m[v[j]] == 0)m.erase(v[j]);
            m[v[i]]++;
            sum += v[i];
            if(m.size() == k)ans = max(ans,sum);
            i++;
            j++;
        }
        return ans;        
    }
};