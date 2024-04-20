class Solution {
public:
int f = -1;
    int findans(TreeNode *root){
        if(!root)return 0;
        int l = findans(root->left);
        int r = findans(root->right);
        int x = l + r + 1;
        f = max(f,x);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = findans(root);
        cout<<f;
        return f-1;
    }
};