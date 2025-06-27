class Solution {
public:
    int firstOcc(vector<int> &v,int t){
        int l = 0, r = v.size() - 1;
        int ans = r;
        while(l <= r){
            int m = l + ((r - l) / 2);
            if(v[m] < t){
                l = m + 1;
            }
            else if(v[m] > t){
                ans = m;
                r = m - 1;
            }
            else{
                ans = m;
                r = m - 1;
            }
        }
        return ans;
    }
    int sec(vector<int> &v,int t){
        int l = 0, r = v.size() - 1;
        int ans = r+1;
        while(l <= r){
            int m = l + ((r - l) / 2);
            if(v[m] < t){
                l = m + 1;
            }
            else if(v[m] > t){
                ans = m;
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& v, int t) { 
        if(v.size() == 0)return {-1,-1};
        int f = firstOcc(v,t);
        if(v[f] != t)return {-1,-1};  
        int s = sec(v,t);
        // if(v[s-1] != t) return {f,f};
        return {f,s-1}; 
    }
};