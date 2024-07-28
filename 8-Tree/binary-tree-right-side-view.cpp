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
    private: 
    void recursion(TreeNode* root , int level,vector<int>&trav){
        if(root == NULL) return ;

        if(level == trav.size()) trav.push_back(root->val);
        if(root->right) recursion(root->right , level+1 , trav);
        if(root->left) recursion(root->left , level+1 , trav);

    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
     
        recursion(root ,0, ans );
        return ans;
    }
};