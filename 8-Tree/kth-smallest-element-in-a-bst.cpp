#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


 /*** Definition for a binary tree node.*/
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

    void inorder(TreeNode* root , int k,int & cnt,int &elem)
    {
        if(!root || cnt>=k) return ;
        
        inorder(root->left , k,cnt , elem);

        cnt++;
               
        if(cnt ==k) {
            elem = root->val;
            return ;
        }


        inorder(root->right , k, cnt,elem);

    }

    int kthSmallest(TreeNode* root, int k) {
       int ans=root->val ,cnt=0;
        inorder(root,k,cnt,ans);
        return ans;
    }
};