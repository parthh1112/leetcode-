class Solution {
public:
    TreeNode* findans(TreeNode *&root,int i){
        if(!root)return root;
        if(root->left)  root->left = findans(root->left,i);
        if(root->right) root->right = findans(root->right,i);

        if(root->val == i){
            root->val = -1;
        }
        return root;
    }
    TreeNode *findactualans(TreeNode *&root,vector<TreeNode *> &ans){
        if(!root)return root;
        root->left = findactualans(root->left,ans);
        root->right = findactualans(root->right,ans);
        if(root->val == -1){
            if(root->left)ans.push_back(root->left);
            if(root->right)ans.push_back(root->right);
            return nullptr;
        }
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& d) {
        vector<TreeNode*> ans;
        for(auto i : d)
        findans(root,i);
        findactualans(root,ans);
        if(root && root->val != -1)ans.push_back(root);
        return ans;
    }
};