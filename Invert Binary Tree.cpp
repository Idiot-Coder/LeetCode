//Program to Invert Binary Tree
//Created by Aryan
//Created on 07/10/2021

class Solution {
public:
TreeNode* invertTree(TreeNode* root) {

if(!root)
return NULL;

TreeNode* temp = root->left;

root->left = invertTree(root->right);
root->right = invertTree(temp);

return root;
}
};