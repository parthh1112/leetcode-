class Solution {
public:
    double mincostToHireWorkers(vector<int>& qq, vector<int>& ww,int k) {
        int n = qq.size();
        double minCost = DBL_MAX; 
        double q = 0; 
        vector<pair<double, int>> da;
        for (int i = 0; i < n; i++) da.emplace_back(((double)ww[i]) /(double) qq[i], qq[i]);
        sort(da.begin(), da.end());
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            double ratio = da[i].first;
            int qua = da[i].second;
            q += qua;
            pq.push(qua); 
            if (pq.size() > k) {
                q -= pq.top();
                pq.pop();
            }
            if (pq.size() == k) minCost = min(minCost, q * ratio);
        }
        return minCost;
    }
};