class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int t) {
        if(v.size() < 4)return {}; 
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-3;i++){
            if(i > 0 && v[i] == v[i-1])continue;
            for(int j=i+1;j<v.size()-2;j++){
                if(j != i+1 && v[j] == v[j-1])continue;
                int k = j+1;
                int l = v.size() - 1;
                while(k < l && k < v.size()-1 && l > 0){
                long int sum = v[i];
                    sum += v[j];sum += v[k];sum += v[l]; 
                    if(sum == t){
                        ans.push_back({v[i],v[j],v[k],v[l]}); 
                        k++;l--; 
                        while(k < l && v[k] == v[k-1])k++;
                        while(k < l && v[l] == v[l+1])l--;
                    }
                    else if(sum > t) l--;
                    else k++;
                }
            }
        }
        return ans; 
    }
};