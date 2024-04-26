class Solution {
public:
    void mm(TreeNode *r,multiset<int> &m){
        if(!r)return ;

        mm(r->left,m);
        m.insert(r->val);
        mm(r->right,m);
    }
    vector<int> getAllElements(TreeNode* r1, TreeNode* r2) {
        multiset<int> m;
        vector<int> v;

        mm(r1,m);
        mm(r2,m);

        for(auto i : m)v.push_back(i);
        return v;
    }
};