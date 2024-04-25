class Solution {
public:
    bool isValidSerialization(string p) {
        int i = 0; vector<string> v;p += ',';string e = "";
        for(int i=0;i<p.size();i++){
            if(p[i] == ',') v.push_back(e),e = "";
            else e += p[i];
        }
        stack<string> s;
        i = 0;
        while(i < v.size()){
            while(!s.empty() && s.top() == "#" && v[i] == "#"){
                s.pop();
                if(s.empty())return 0;
                s.pop();
            }
            s.push(v[i++]);
        }
        if(s.size() == 1 && s.top() == "#")return 1;
        return false;
    }
};