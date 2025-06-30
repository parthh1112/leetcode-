class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0, r = arr.size() - 1;
        while(l <= r){
            int mid = l + ((r - l) / 2);
            if(k > (arr[mid] - (mid + 1))){
                l = mid + 1;
            }
            else if(k <= (arr[mid] - (mid + 1))){
                r = mid - 1;
            }
        }
        if(l == 0)return k;
        int dif = arr[r] - (r + 1);
        int add = k - dif; // 2
        if(l == arr.size()) return k + arr[arr.size() - 1] - dif;
        return arr[r] + add;

        return -1;
    }
};