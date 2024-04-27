class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int l, int r) {
        if(!root)return nullptr;

        if(root->val >= l && root->val <= r){ // valid
            root->left = trimBST(root->left,l,r);
            root->right = trimBST(root->right,l,r);
        }
        else { // invalid
            if(root->val < l){
                return trimBST(root->right,l,r);
            }
            else {
                return trimBST(root->left,l,r);
            }
        }
        return root;        
    }
};