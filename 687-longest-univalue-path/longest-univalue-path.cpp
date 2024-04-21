class Solution {
public:
    int findans(TreeNode *root,int pre,int &ans){
        if(!root)return 0;
        int l = findans(root->left,root->val,ans);
        int r = findans(root->right,root->val,ans);
        int sum = 0;
        if(pre == root->val){
            sum = 1;
        }
        ans = max(l+r,ans);
        if(pre == root->val) return max(l,r) + sum;
        else return 0;
    }
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0;
        int pre = -1002;
        findans(root,pre,ans);
        return ans;
    }
};