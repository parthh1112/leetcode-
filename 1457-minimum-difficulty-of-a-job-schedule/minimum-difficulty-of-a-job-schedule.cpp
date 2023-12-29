class Solution {
public:
    int dp[302][1004][11];
    int f(int i ,int currmax, int days , vector<int>&v)
    {
      if(i==v.size())
      {
          if(days==0)
          return 0;
          return 1e8;
      }
      if(days==0) return 1e8;
      if(dp[i][currmax][days]!=-1)
      return dp[i][currmax][days];
      int endday=0;
      int continueday=0;
      endday=max(currmax,v[i])+f(i+1,0,days-1,v);
      continueday=f(i+1,max(currmax,v[i]),days,v);
      return dp[i][currmax][days]= min(endday,continueday); 
    }
    int minDifficulty(vector<int>& j, int d) {
      memset(dp,-1,sizeof(dp));
    if(f(0,0,d,j)>=1e8)
    return -1;
     return  f(0,0,d,j); 
    }
};