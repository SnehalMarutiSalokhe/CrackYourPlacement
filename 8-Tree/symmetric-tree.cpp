#include<bits/stdc++.h>
using namespace std;


/**
  Definition for a binary tree node.

*/
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  
class Solution {
    bool helpSumm(TreeNode* left , TreeNode* right )
    {
        if(left == NULL  ||  right == NULL) return  left == right;

        if( left->val != right->val) return false;

         return  helpSumm(left->left , right->right)
            &&
            helpSumm(left->right , right->left)           ;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return helpSumm(root->left , root->right);
    }
};