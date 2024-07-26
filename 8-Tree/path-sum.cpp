#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


//   Definition for a binary tree node.

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
   } ;
 

 
class Solution {

    bool isLeaf(TreeNode*a ){
        return !(a->left || a->right);
    }

    bool PathSum(TreeNode* a, int t,int pathSum){

        if(!a) return 0;

        pathSum+=a->val;


            if( isLeaf(a) && t==pathSum ||
                PathSum(a->left,t,pathSum) ||
                PathSum(a->right,t,pathSum)
              ) return true;

        return false;
    }

public:

    bool hasPathSum(TreeNode* a, int targetSum) {  
        return PathSum(a,targetSum,0);
    }

};