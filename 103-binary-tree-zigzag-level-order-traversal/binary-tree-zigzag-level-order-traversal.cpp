class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool chk = 0;
        while(q.size()){
            int s = q.size();
            vector<int> v;
            while(s--){
                v.push_back(q.front()->val);
                if(q.front()->left)  q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                q.pop();
            }
            if(chk == 1)reverse(v.begin(),v.end());
            chk=!chk;
            ans.push_back(v);
        }
        return ans;
    }
};