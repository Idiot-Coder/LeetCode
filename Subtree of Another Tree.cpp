//Program to Subtree of Another Tree
//Created by Aryan 
//Created on 08/10/2021

class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s)
            return false ;
       
        bool curr=false ;  
        if(s->val==t->val)
            curr=Check(s,t) ;
           
        if(curr)
            return true ;
        else
            return isSubtree(s->left,t)||isSubtree(s->right,t) ;
    }
   
    bool Check(TreeNode* org,TreeNode* copy){
        if(!org&&!copy)
            return true ;
       
        if(!org||!copy)
            return false ;
           
        return (org->val==copy->val)&&(Check(org->left,copy->left)&&(Check(org->right,copy->right))) ;
    }
};