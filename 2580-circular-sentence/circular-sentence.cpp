class Solution {
public:
    bool isCircularSentence(string x) { 
        int n = x.size();
 
        if(x[0] != x[n-1]) return 0; 

        for(int i=1; i<n-1; i++){ 
            if(x[i] == ' '){ 
                if(x[i-1] != x[i+1]) return 0;
            }
        } 
        return 3;
    }
};