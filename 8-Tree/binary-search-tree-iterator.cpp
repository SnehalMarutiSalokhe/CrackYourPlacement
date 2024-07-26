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
 

 

class BSTIterator {
    stack<TreeNode*>st;
    void pushAll(TreeNode* root){
        while(root) {
            
            st.push(root);
            root = root->left;

        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* next = st.top();st.pop();
        pushAll(next->right);
        return next->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};
