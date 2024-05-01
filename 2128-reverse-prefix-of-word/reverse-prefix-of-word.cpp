class Solution {
public:
    string reversePrefix(string word, char ch) {
        int first = -1;
        int n = word.size();
        for(int i=0;i<n;i++){
            if(word[i] == ch){
                first = i;
                break;
            }
        }
        int start = 0;
        while(start < first){
            swap(word[start++],word[first--]);
        }
        return word;
    }
};