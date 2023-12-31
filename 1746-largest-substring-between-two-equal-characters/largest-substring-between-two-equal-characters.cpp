class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) { 
        int n=s.length();
        vector<int>arr[26];
        for(int i=0;i<n;i++) arr[s[i]-'a'].push_back(i);
        int ans=-1;
        for(int i=0;i<26;i++){ 
            int occurences=arr[i].size(); 
            if(occurences>1){
                int substr_len=arr[i][occurences-1]-arr[i][0]-1;  
                ans=max(ans,substr_len);
            }
        }
        return ans;
    }
};