class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& v) {
        int ans = 0;   
        for(int i=0;i<v.size();i++){
            int sum = 0;
            for(int j=i;j<v.size();j++){
                sum += v[j];
                if((i-j) % 2 == 0){ 
                    ans += sum;
                }
            }cout<<endl;
        }
        return ans;
    }
};