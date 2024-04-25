class Solution {
public:
    int lowerBound(vector<int> &v,int num){
        int s=0,e=v.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(v[mid]<=num)s=mid+1;
            else e=mid-1;
        }
        return e;
    }
    int upperBound(vector<int> &v,int num){
        int s=0,e=v.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(v[mid]>=num) e=mid-1;
            else s=mid+1;
        }
        return s;
    }
    void inorderedTraversal(TreeNode *root,vector<int> &v){
        if(!root) return;
        inorderedTraversal(root->left,v);
        v.push_back(root->val);
        inorderedTraversal(root->right,v);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& q) {
        vector<int> v;
        inorderedTraversal(root,v);
        vector<vector<int>> ans; 
        for(int i=0;i<q.size();i++){
            int x = lowerBound(v,q[i]);
            int y = upperBound(v,q[i]);
            if(x>=0 && x<v.size() && v[x]<=q[i]) x = v[x];
            else x = -1;
            if(y>=0 && y<v.size() && v[y]>=q[i]) y = v[y];
            else y = -1;
            cout<<x<<" "<<y<<endl;
            ans.push_back({x,y});
        }
        return ans;
    }
};