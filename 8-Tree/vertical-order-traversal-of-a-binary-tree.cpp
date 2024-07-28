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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int , multiset<int>>> nodes;
        queue<pair<TreeNode* , pair<int , int>>> q;
        q.push({root , {0,0}});
        int x=0,y=0;
        while(!q.empty())
        {
            TreeNode * node = q.front().first;
            x = q.front().second.first;
            y = q.front().second.second;

            nodes[x][y].insert(node->val);
            if(node->left) {
                q.push({node->left ,{x-1 , y+1}});
            }
             if(node->right) {
                q.push({node->right ,{x+1 , y+1}});
            }
            q.pop();
        }

        vector<vector<int>> ans ;
        for(auto node:nodes)
        {
            vector<int> col;
            for(auto n: node.second)
            {
                col.insert(col.end(), n.second.begin(),n.second.end());
            }

            ans.push_back(col);
        }

        return ans;
    }
};