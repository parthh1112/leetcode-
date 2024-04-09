class Solution {
public:
    int chk(map<char,int> &u,map<char,int> &v){ 
        int cnt = 0;
        for(auto j : v){
            if(j.second >= u[j.first])cnt++;
            else return 0;
        }
        return cnt;
    }
    string minWindow(string s, string p) {
        int ansl = 1000000,ansr = 0;
        map<char,int> u,o;
        for(auto i : p)o[i]++;
        int l =0,r=0,n=s.size();
        vector<int> v;
        int q = 0;
        while(r < n){
            if(o.find(s[r]) != o.end()){
                v.push_back(r);
                u[s[r]]++;
                int cnt = chk(o,u);
                while(cnt == o.size()){
                    int x = v[q];
                    int y = r;
                    if(abs(ansl-ansr) > abs(x-y)){
                        ansl = x;ansr = r;
                    }
                    u[s[v[q++]]]--;
                    cnt = chk(o,u);
                }
            }
            r++;
        } 
        if(ansl == 1000000)return "";
        return s.substr(ansl,ansr-ansl+1);
    }
};