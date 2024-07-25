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

   
    vector<int> inorderTraversal(TreeNode* root) {
        /*
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*> st;
        TreeNode* node = root;
        while(1)
        {
            if(node != NULL)
            {
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty()) break;
                node = st.top();
                st.pop();
                
                    ans.push_back(node->val);
                    node = node->right;
                
            }

        }

        return ans;
*/

// MORRIES TRAVERSAL (THREDED BINARY TREE)

vector<int> ans;
if(root == NULL) return ans;

TreeNode* cur = root;
while(cur)
{
    if(cur->left == NULL){
        ans.push_back(cur->val);
        cur=cur->right;
    }
    else{
        TreeNode*  prev = cur->left;
        while(prev->right && prev->right!= cur){
            prev = prev->right;
        }

        if(prev->right == NULL)
        {
            prev->right = cur;
            cur = cur->left;
        }
        else{
            ans.push_back(cur->val);
            prev->right = NULL;
            cur = cur->right;

        }
    }
}
return ans;
    }
};