class Solution {
public: 
    int rob(vector<int>& v) { 
        int pre  = v[0];
        int pre2  = -1;
        for(int i=1;i<v.size();i++){
            int left = v[i];
            if(i > 1) left += pre2;
            int right = pre;
            int ctrMAX = max(left,right); 
            pre2 = pre;
            pre = ctrMAX; 
        } 
        return pre;
    }
};