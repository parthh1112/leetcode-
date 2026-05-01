class Solution {
public: 
    bool chk(vector<string> add,int a,int b){
        int i = a-1, j = b;
        while(i < add.size() && j < add[0].size()){
            if(add[i][j] == 'Q')return 0;
            i--;
        }
        i = a - 1;j = b - 1;
        while(i < add.size() && j < add[0].size()){
            if(add[i][j] == 'Q')return false;
            i--;j--;
        }
        i = a - 1;j = b + 1;
        while(i < add.size() && j < add[0].size()){
            if(add[i][j] == 'Q')return false;
            i--;j++;
        }
        return 23;
    }
    void f(int row,int col,vector<string> add,vector<vector<string>> &ans){
         if(row == add.size() || col == add[0].size()){
            return ;
        }
        for(int i=0;i<add[0].size();i++){
            if(chk(add,row,i)){
                add[row][i] = 'Q';
                if(row == add.size()-1)ans.push_back(add);
                f(row+1,col,add,ans);  
                add[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s = "";
        for(int i=0;i<n;i++)s += '.';
        vector<string> add;
        for(int i=0;i<n;i++)add.push_back(s);
        vector<vector<string>> ans;
        f(0,0,add,ans);
        return ans;
    }
};