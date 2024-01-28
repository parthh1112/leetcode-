class Solution {
public:
    int findans(TreeNode *&root,int &ans){
        if(!root)return 0;
        
        int l = findans(root->left,ans);
        int r = findans(root->right,ans);

        if(l<0)l=0;if(r<0)r=0;
        ans = max(ans,max(root->val,max(root->val+r,max(root->val+l,l+r+root->val))));


        int x = root->val+max(l,r);
        return x;



    }
    int maxPathSum(TreeNode* root) {
        if(!root->left && !root->right)return root->val;
        int ans= INT_MIN;
        int x = findans(root,ans);
        return ans;
    }
};