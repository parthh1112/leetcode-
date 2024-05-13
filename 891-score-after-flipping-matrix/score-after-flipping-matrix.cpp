class Solution {
public: 
    string which(vector<int> &v){
        string x = "",y = "";
        for(int i=0;i<v.size();i++){
            if(v[i] == 1){x += '1'; y += '0';}
            else {x += '0';y += '1';}
        }
        return (x > y) ?  x : y;
    }
    string chkJtoM(vector<int> &v,vector<vector<int>>& grid){ 
        int s = v.size();
        int a = 0;
        int b = 0;
        for(auto i : v){
            if(i == 1)a++;
            else b++;
        } 
        string x = "",y = "";
        for(int i=0;i<v.size();i++){
            if(v[i] == 1){ x += '1'; y += '0';}
            else { x += '0';y += '1';}
        }
        return (a<b) ? y : x;
    }
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        for(int i=0;i<n;i++){  
            string c = which(grid[i]);
            for(int j=0;j<m;j++){
                if(c[j] == '0')grid[i][j] = 0;
                else grid[i][j] = 1;
            } 
        } 
        for(int i=0;i<m;i++){ 
            vector<int> h;
            for(int j=0;j<n;j++){
                h.push_back(grid[j][i]);
            }  
            string c = chkJtoM(h,grid);
            for(int j=0;j<n;j++){
                if(c[j] == '0')grid[j][i] = 0;
                else grid[j][i] = 1;
            }
        }
        unsigned long long int ans =  0;
        for(int i=n-1;i>=0;i--){
            unsigned long long int puss = 0;
            unsigned long long int tans = 1;
            for(int j=m-1;j>=0;j--){
                puss += (tans * grid[i][j]);
                tans *= 2;
            }
            ans += puss;
        }
        return ans;
    }
};