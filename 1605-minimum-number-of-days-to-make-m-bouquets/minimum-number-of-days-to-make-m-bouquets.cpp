class Solution {
public:
    int funn(vector<int> &v,int day,int k){
        int cnt = 0;
        int tans = 0;
        for(int i=0;i<v.size();i++){
            if(v[i] <= day){
                cnt++;
            }
            else{
                tans += (cnt/k);
                cnt = 0;
            }
        }
        if(cnt != 0){
            tans += (cnt/k);            
        }
        return tans;
    }
    int minDays(vector<int>& bd, int m, int k) {
        long x = m;
        long y = k;
        long z = x*y;
        long a = bd.size();
        if(z > a)return -1;
        // if(m*k > bd.size())return -1;
        int l = *min_element(bd.begin(),bd.end());
        int r = *max_element(bd.begin(),bd.end());
        int ans = INT_MAX;
        while(l <= r){
            int mid = l + ((r - l) / 2);
            int tans = funn(bd,mid,k);
            if(tans >= m)ans = min(ans,mid); 
            if(tans < m){
                l = mid + 1;
            }
            else if(tans > m){
                r = mid - 1;
            }
            else{
                r = mid - 1;
            }
        }
        return ans;
    }
};