#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


 /*** Definition for a binary tree node.*/
  struct Node {
      int val;
      Node *left;
     Node *right;
     Node* next;
      Node() : val(0), left(nullptr), right(nullptr) {}
      Node(int x) : val(x), left(nullptr), right(nullptr) {}
      Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
  };
 

 
class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            for(int i=0;i<sz;i++){
                Node* con = q.front();
                q.pop();
                if(con->left) q.push(con->left);
                if(con->right)q.push(con->right);
                
                Node* nxt = q.front();
                con->next=nxt;

                if(i==sz-1) con->next=NULL;               
            
           }

           
        }
        return root;
    }
};