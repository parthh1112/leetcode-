class Solution {
public:
    int fun(vector<int> &v,int cap){
        int sum = 0;
        int cnt = 0;
        for(int i=0;i<v.size();i++){
            if(sum + v[i] > cap){
                cnt++;
                sum = v[i];
            }
            else{
                sum += v[i];
            }
        }
        cnt += (sum / cap);
        if(sum % cap != 0)cnt++;
        return cnt;
    }
    int shipWithinDays(vector<int>& w, int d) {
        int l = *max_element(w.begin(),w.end());
        int r = 0;
        for(auto i : w)r += i;
        while(l <= r){
            int mid = (l + r) / 2;
            int day = fun(w,mid);
            if(day > d){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout<<l<<" "<<r<<endl;
        return l;
    }
};