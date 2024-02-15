class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        if(k == 0)return 0;
        int ans = 0;
        int i,j;i=j=0;
        int mul = 1;
        while(i < v.size()){
            j=i; 
            while((j < v.size()) && ((mul*v[j]) < k)){
                mul *= v[j]; 
                j++;
            }
            mul=1;
            i++;
            ans += (j-i+1);
        }
    return ans;
    }
};