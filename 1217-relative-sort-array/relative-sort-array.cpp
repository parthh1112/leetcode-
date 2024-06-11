class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        for(auto i : arr1)m[i]++;
        int ind = 0;
        for(int i=0;i<arr2.size();i++){
            int ele = arr2[i];
            int l = m[arr2[i]];
            m[arr2[i]] = 0;
            while(l--){
                arr1[ind] = ele;
                ind++;
            }
        }
        for(auto i : m){
            if(i.second != 0){
                int ele = i.first;
                int l = m[ele];
                m[ele] = 0;
                while(l--){
                    arr1[ind] = ele;
                    ind++;
                }
            }
        }
        return arr1;
    }
};