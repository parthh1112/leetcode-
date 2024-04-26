class Solution {
public:
    void mm(TreeNode *r,priority_queue<int, vector<int>, greater<int>>  &m){
        if(!r)return ;

        mm(r->left,m);
        m.push(r->val);
        mm(r->right,m);
    }
    vector<int> getAllElements(TreeNode* r1, TreeNode* r2) {
        priority_queue<int, vector<int>, greater<int>> m;

        vector<int> v;

        mm(r1,m);
        mm(r2,m);
while(m.size()){
    v.push_back(m.top());m.pop();
}
        return v;
    }
};