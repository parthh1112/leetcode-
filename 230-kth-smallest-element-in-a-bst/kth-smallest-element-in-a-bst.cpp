class Solution {
public:
    void ff(TreeNode *root,vector<int> &v){
        if(!root)return ;
        ff(root->left,v);
        v.push_back(root->val);
        ff(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        ff(root,v);
        return v[k-1];
    }
};