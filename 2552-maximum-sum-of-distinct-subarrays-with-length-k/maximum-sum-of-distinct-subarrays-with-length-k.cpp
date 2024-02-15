class Solution {
public:
    long long maximumSubarraySum(vector<int>& v, int k) {
        long long int ans = 0;
        long long int i,sum,j;i=j=sum=0;
        unordered_map<long long int,long long int> m;
        while(i < v.size()){
            bool chk = 0;
            while((j < v.size()) && ((j-i) < k)){
                sum += v[j];
                m[v[j]]++;
                j++;                
            }
            if(m.size() == k){
                ans = max(ans,sum);
                chk = 1;cout<<"ok";
            }  
            if(m[v[i]] == 1){
                m.erase(v[i]);
            }
            else{
                m[v[i]]--;
            }
            sum -= v[i];  
            i++;
        }
        return ans;
    }
};