class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode *> help;
        vector<long long int> ls;
        help.push(root);
        while(!help.empty()){
            long long int s = help.size();
            long long int ass = 0;
            while(s--){
                ass += help.front()->val;
                if(help.front()->left) help.push(help.front()->left);
                if(help.front()->right) help.push(help.front()->right);
                help.pop();
            }
            ls.push_back(ass);
        }
        if(ls.size() < k)return -1;
        sort(ls.begin(),ls.end());
        return ls[ls.size()-k];
    }
};