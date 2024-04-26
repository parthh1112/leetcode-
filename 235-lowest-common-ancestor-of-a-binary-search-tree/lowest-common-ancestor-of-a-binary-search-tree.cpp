class Solution {
public:
    void f(TreeNode *root,TreeNode *&p,vector<TreeNode*> &l){
        if(!root)return ;
        if(p->val < root->val){ l.push_back(root); f(root->left,p,l);}
        else if(p->val > root->val){ l.push_back(root); f(root->right,p,l);}
        else {l.push_back(root);}
        return ;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode *> l,r;
        f(root,p,l);
        f(root,q,r);
        int i = 0;
        while(i < l.size() && i < r.size() && l[i] == r[i]){
            i++;
        }
        return l[i-1];
    }
};