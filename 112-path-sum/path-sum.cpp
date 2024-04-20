class Solution {
public:
    void findans(TreeNode *root,int ts,bool &ans,int sum){
        if(!root || ans)return ;
        if(!root->left && !root->right){
            if(sum+root->val == ts){
                ans = 1;
            }
            return ;
        }
        findans(root->left,ts,ans,sum+root->val);
        findans(root->right,ts,ans,sum+root->val);
        
    }
    bool hasPathSum(TreeNode* root, int ts) {
        int sum = 0;
        bool ans = 0;
        findans(root,ts,ans,sum);
        return ans;
    }
};