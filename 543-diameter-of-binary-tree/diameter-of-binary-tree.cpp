class Solution {
public:
int f = -1;
    int findans(TreeNode *root){
        if(!root)return 0;
        int l = findans(root->left);
        int r = findans(root->right);
        f = max(f,l + r + 1);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = findans(root);
        return f-1;
    }
};