class Solution {
public:
    void findr(TreeNode *&r1,TreeNode *&r2){
        if(!r1 && !r2)return ;
        if(!r2)return ;
        if(!r1){

        }
        r1 -> val += r2 -> val;
        if(r1->left)
        findr(r1->left,r2->left);
        else r1 -> left = r2 -> left;
        if(r1->right)
        findr(r1->right,r2->right);
        else r1 -> right = r2 -> right;


    }
    TreeNode* mergeTrees(TreeNode* r1, TreeNode* r2) {
        // i will return r1
        if(!r1)return r2;
        if(!r2)return r1;
        findr(r1,r2);

        return r1;
    }
};