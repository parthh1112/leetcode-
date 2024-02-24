class Solution {
public:
    void sortColors(vector<int>& v) {
        int z = 0, f = 0 , s = v.size() - 1;
        while(f <= s){
            if(v[f] == 0){
                swap(v[f],v[z]);
                f++;z++;
            }
            else if(v[f] == 1){
                f++;
            }
            else if(v[f] == 2) {
                swap(v[f],v[s]);s--;
            }
        }
    }
};