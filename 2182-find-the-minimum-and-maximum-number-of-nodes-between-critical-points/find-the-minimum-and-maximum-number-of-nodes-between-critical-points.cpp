class Solution{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head){
        if (head == NULL || head->next == NULL || head->next->next == NULL)return {-1, -1};
        vector<int> ans;
        vector<int> position;
        ListNode *temp = head->next;
        ListNode *pre = head;
        int pos = 1;
        while (temp->next != NULL){
            if ((temp->val > pre->val && temp->val > temp->next->val) || (temp->val < pre->val && temp->val < temp->next->val))position.push_back(pos + 1);
            pos++;
            temp = temp->next;
            pre = pre->next;
        }
        if(position.size() == 0 || position.size() == 1)return {-1,-1};
        else if (position.size() == 2)return {position[1] - position[0], position[1] - position[0]};
        int maxx = INT_MIN, minn = INT_MAX;
        for (int i = 1; i < position.size(); i++)minn = min(position[i] - position[i - 1], minn);
        return {minn, position[position.size() - 1] - position[0]};
    }
};