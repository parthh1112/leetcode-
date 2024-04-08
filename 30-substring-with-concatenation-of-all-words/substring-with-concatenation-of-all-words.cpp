class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& w) {
        vector<int> ans;
        map<string,int> orig,temp;
        for(auto i : w)orig[i]++; 
        int i = 0,n = s.size(),wosize = w[0].size(),wisize = w[0].size() * w.size();
        while(i < n){
            int pre = i;
            string str = s.substr(i,wosize);
            if(orig.find(str) != orig.end()){
                temp[str]++;
                int rem = wisize - wosize;
                i += wosize;
                int j = i + rem;
                while(i < j && i < n){
                    string str1 = s.substr(i,wosize);
                    temp[str1]++;
                    i += wosize;
                }
                if(orig == temp) ans.push_back(pre);
                temp.clear();
            } 
            i = pre + 1;
        }
        return ans;
    }
};