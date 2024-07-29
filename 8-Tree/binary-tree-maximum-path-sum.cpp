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
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
       maxSumDown(root , maxi);
        return  maxi;
    }
private:
    int maxSumDown(TreeNode* root , int & maxi)
    {
        if(root == NULL) return 0;

        int lSum =max(0, maxSumDown(root->left , maxi));
        int rSum =max(0, maxSumDown(root->right , maxi));

        maxi = max(maxi , lSum+rSum+root->val);

        return max(lSum,rSum) + root->val;

    }
};