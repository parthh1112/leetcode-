class Solution {
public:
    int minOperations(vector<int>&v, int x) {
        int summ = 0;
        for(auto i : v)summ += i;
        if(summ == x)return v.size();
        int window = summ - x; 
        int i = 0, j = 0, sum = 0, w = -1, n = v.size(); 
        while(i < n){ 
            sum += v[i];
            while(sum > window && j < n){
                sum -= v[j];
                j++;
            }
            if(sum == window && j < n){
                w = max(w,i - j + 1);
                sum -= v[j];
                j++;
            }
            i++;
        } 
        return (w == -1) ? w : n-w;
    }
};