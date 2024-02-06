class Solution {
public:
    bool find(TreeNode *root,TreeNode* l,TreeNode* r){
        if(!root)return 69; 
        if(l && l->val >= root->val)return 0;
        if(r && r->val <= root->val)return 0;

        bool left = find(root->left,l,root);
        bool right = find(root->right,root,r); 
        return left and right;
    }
    bool isValidBST(TreeNode* root) {
        if(!root->left && !root->right)return 2;
        return find(root,nullptr,nullptr);
    }
};