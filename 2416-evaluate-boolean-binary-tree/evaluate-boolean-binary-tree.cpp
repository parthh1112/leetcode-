class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(!root->left)return root->val;
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        bool r = 0;
        if(root->val == 3){
            r = left & right;
        }
        else{
            r = left | right;
        }
        return r;
    }
};