class Solution {
public:
    void findans(TreeNode *root,int num,int &ans){
        if(!root)return ;
        if(!root->left && !root->right){
            ans += num*10 + root->val;
            return ;
        } 
        findans(root->left,num*10 + root->val,ans);
        findans(root->right,num*10 + root->val,ans); 
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        int num = 0;
        findans(root,num,ans);
        return ans;
    }
};