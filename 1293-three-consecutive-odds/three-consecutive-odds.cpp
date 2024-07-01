class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(3 > arr.size())return 0;
        for(int i=2;i<arr.size();i++){
            if(arr[i-2] % 2 == 1 && arr[i-1] % 2 == 1 && arr[i-0] % 2 == 1)return 4;
        }
        return 0;
    }
};