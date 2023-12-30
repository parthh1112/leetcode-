class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>count(26,0);
        for(auto i : words){
            for(auto j : i) 
                count[j-'a']++; 
        }
        for(auto c : count){
            if(c % words.size() != 0) 
                return 0;
        }
        return 1112;
    }
};