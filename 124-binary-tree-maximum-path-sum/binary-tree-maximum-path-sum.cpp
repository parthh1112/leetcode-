class Solution {
public:
    int findans(TreeNode *root,int sum,int &ans){
        if(!root)return 0;
        int l = findans(root->left,sum,ans);
        int r = findans(root->right,sum,ans);
        if(l<0)l=0;if(r<0)r=0;
        ans = max(ans,l + r + root->val);
        return max(l,r) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int sum = 0;
        int ans = -1001;
        findans(root,sum,ans);
        return ans;
    }
};