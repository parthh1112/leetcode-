class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int> &a, int k) {
        vector<pair<float,pair<int,int>>> help;
        int n = a.size();
        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
                float d = float(a[i]) / float(a[j]);
                help.push_back(make_pair(d,make_pair(a[i],a[j])));
            }
        }
        sort(help.begin(),help.end());
        return {help[k-1].second.first,help[k-1].second.second};
    }
};