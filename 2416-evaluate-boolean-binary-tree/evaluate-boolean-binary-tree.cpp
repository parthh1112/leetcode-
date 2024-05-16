class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(!root->left)return root->val;
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        return (root->val == 3) ? (left & right) : (left | right);
    }
};