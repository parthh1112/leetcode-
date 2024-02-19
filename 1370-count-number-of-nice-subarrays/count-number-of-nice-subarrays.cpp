class Solution {
public:
    int numberOfSubarrays(vector<int>& v, int k) {
        deque<int> q;v.push_back(1);
        int i=0,j=0,cnt=0,fans=0;
        while(i < v.size()){
            if(v[i] % 2 == 1){
                cnt++;
                if(cnt == k+1){
                    int f = q.front(),l = q.back();// 1,4
                    int leftw = f - j;// 3-0=>3 
                    int rightw = i - l-1;//10-6-1=>3
                    q.pop_front();//3,6=>6
                    int ans = (leftw * rightw) + ((i-j)-(l-f+1)+1);//((3*3)+((10-0)-(6-3+1)+1))=>9+(10-4+1)=>9+7
                    fans += ans;
                    cnt--;
                    j = f+1;
                }
                q.push_back(i);
            }
            i++;
        }
        return fans;
    }
};