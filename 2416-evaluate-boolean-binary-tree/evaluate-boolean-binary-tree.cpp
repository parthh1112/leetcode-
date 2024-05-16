class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(!root->left)return root->val; 
        return (root->val == 3) ? 
        (evaluateTree(root->left) & evaluateTree(root->right))
        :
        (evaluateTree(root->left) | evaluateTree(root->right));
    }
};