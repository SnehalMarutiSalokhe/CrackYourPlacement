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
 

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "";
        string s = "";
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();

            if(node == NULL) s.append("#,");
            else s.append(to_string(node->val)+',');
            if(node != NULL)
            {
                q.push(node->left);
                q.push(node->right);
            }
        }

        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data == "") return NULL;
        stringstream s(data);
        string str="";
        getline(s,str,',');
        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();q.pop();
            getline(s,str,',');

            if(str == "#") {
                node->left = NULL;
                
            }else{
               TreeNode* Left = new TreeNode(stoi(str));
                q.push(Left);
                node ->left = Left;

            }

            getline(s,str,',');

            if(str == "#") {
                node->right = NULL;
                
            }else{
               TreeNode* Right = new TreeNode(stoi(str));
                q.push(Right);
                node ->right = Right;

            }

        }

        return root;
    }
};
