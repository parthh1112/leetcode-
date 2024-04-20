class Solution {
public:
    int ch (TreeNode *root,bool &ans){
        if(!root || !ans)return 0;
        int l = ch(root->left,ans)+1;
        int r = ch(root->right,ans)+1;
        if(abs(l-r) >= 2){
            ans = 0;
        } 
        return max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        bool ans = 1;
        int x = ch(root,ans);
        return ans;
    }
};