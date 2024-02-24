class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int t) {
        if(v.size() < 4)return {}; 
        set<vector<int>> ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-3;i++){
            for(int j=i+1;j<v.size()-2;j++){
                int k = j+1;
                int l = v.size() - 1;
                while(k < l && k < v.size()-1 && l > 0){
                long int sum = v[i];
                    sum += v[j];sum += v[k];sum += v[l]; 
                    if(sum == t){
                        vector<int> q {v[i],v[j],v[k],v[l]}; 
                        ans.insert(q); 
                        k++;l--; 
                    }
                    else if(sum > t) l--;
                    else k++;
                }
            }
        }
        vector<vector<int>> fans (ans.begin(),ans.end());
        return fans;
    }
};