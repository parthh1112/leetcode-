class Solution {
public: 
    int findans(TreeNode *&root,int &ans){
        if(!root)return 0;
        int l = findans(root->left,ans);
        int r = findans(root->right,ans);
        ans += abs(l) + abs(r);
        return l + r + root->val - 1;
    }
    int distributeCoins(TreeNode* root) {
        int ans = 0;
        findans(root,ans);
        return ans;        
    }
};