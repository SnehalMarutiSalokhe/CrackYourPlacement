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
public:
    TreeNode* func(vector<int>& nums,int l,int h)
    {
        if(l>h) return NULL;
        int mid = (l+h)/2;
         TreeNode* root = new TreeNode(nums[mid]);
         if(l==h) return root;

         root->left = func(nums,l,mid-1);
         root->right= func(nums,mid+1,h);

         return root;


    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
       return  func(nums,0,nums.size()-1);
        
    }
};