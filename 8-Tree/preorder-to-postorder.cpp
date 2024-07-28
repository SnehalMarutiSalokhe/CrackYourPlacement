#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


//   Definition for a binary tree node.

  struct Node {
      int val;
      Node *left;
      Node *right;
      Node() : val(0), left(nullptr), right(nullptr) {}
      Node(int x) : val(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
   } ;
 
class Solution {
  public:
    Node *helper(int pre[],int &n,int &index,int l,int h)
    {
        if(index >= n) return NULL;
        
        if(l > pre[index] or pre[index] > h)
        {
            return NULL;
        }
        
        Node *root= new Node(pre[index++]);
        root->left = helper(pre,n,index,l,root->val);
        root->right = helper(pre,n,index,root->val,h);
        
        return root;
    }
    // Function that constructs BST from its preorder traversal.
    Node* Bst(int pre[], int n) {
        // code here
        if(n ==0) return NULL;
        int i=0;
        return helper(pre,n,i,0,INT_MAX);
    }
};