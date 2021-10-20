//Program to Range Sum of BST
//Created by Aryan
//Created on 20/10/21

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int result = 0;
        vector<TreeNode*> s{root};
        while (!s.empty()) {
            auto node = s.back(); s.pop_back();
            if (node) {
                if (low <= node->val && node->val <= high) {
                    result += node->val;
                }
                if (low <= node->val) {
                    s.emplace_back(node->left);
                }
                if (node->val <= high) {
                    s.emplace_back(node->right);
                }
            }
        }
        return result;
    }
};