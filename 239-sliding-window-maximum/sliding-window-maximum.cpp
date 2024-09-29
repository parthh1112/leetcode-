class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        vector<int> ans;
        int i = 0, j = 0, n = v.size();
        deque<int> d;
        while(i < k){
            while(d.size() != 0 && v[d.back()] <= v[i]){
                d.pop_back();
            }
            while(d.size() != 0 && i - k >= d.front()){
                d.pop_front();
            }
            d.push_back(i);
            i++;
        }
        ans.push_back(v[d.front()]);
        while(i < n){
            while(d.size() != 0 && v[d.back()] <= v[i]){
                d.pop_back();
            }
            while(d.size() != 0 && i - k >= d.front()){
                d.pop_front();
            }
            d.push_back(i);
            ans.push_back(v[d.front()]);
            i++;
        }
        return ans;        
    }
};