class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>&v, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> q;
        int n = v.size();
        for(int i=0;i<k;i++) q.push({v[i],i});
        ans.push_back(q.top().first);
        int j = k; 
        while(j < n){
            int mini = j - k;
            while(q.size() && q.top().second <= mini){ 
                q.pop();
            } 
            q.push({v[j],j});
            ans.push_back(q.top().first);
            j++;
        }
        return ans;
    }
};