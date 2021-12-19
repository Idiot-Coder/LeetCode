//Program to Symmetric Tree
//Created by Aryan
//Created on 19/12/2021

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push(make_pair(root->left, root->right)); // push the root
        while (!q.empty()) {
            // get the front element from the queue
            pair<TreeNode*, TreeNode*> p = q.front();
            q.pop();
            if (!(p.first) && !(p.second)) {
                continue;
            }
            if ((!p.first) || !(p.second)) {
                return false;
            }
            // value not equal, then it is not symmetric
            if (p.first->val != p.second->val) {
                return false;
            }
            // push the sub trees for comparision
            q.push(make_pair(p.first->left, p.second->right));
            q.push(make_pair(p.first->right, p.second->left));
        }
        return true;
    }
};