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
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
          unordered_map<TreeNode*,TreeNode*> parentTrack;
          queue<TreeNode*>q;
          q.push(root);
          while(!q.empty())
          {
            TreeNode* node = q.front();
            q.pop();

            if(node->left)
            {
                q.push(node->left);
                parentTrack[node->left] = node;
            }
            if(node->right)
            {
                q.push(node->right);
                parentTrack[node->right] = node;
            }
          }

       unordered_map<TreeNode*,bool> visited;
       visited[target]=true;
         q.push(target);
         int dis =0;
          while(!q.empty())
          {
            int size = q.size();
            if(dis++ == k) break;
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();

                if(node->left && !visited[node->left])
                {
                    q.push(node->left);
                    visited[node->left] = true;
                }
                if(node->right&& !visited[node->right])
                {
                    q.push(node->right);
                    visited[node->right] = true;
                }
                if(parentTrack[node] && !visited[parentTrack[node]] )
                {
                    q.push(parentTrack[node] );
                    visited[parentTrack[node]] = true;
                }

             }
           
          }

          vector<int> ans;
          while(!q.empty())
          {
            ans.push_back(q.front()->val);
            q.pop();
          }
    
    return ans;

    }
};