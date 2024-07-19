#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool dfs(int i,int j,int cnt,vector<vector<char>>& b,string word)    {
        if(word.length()==cnt) return true;
        
        if(i<0 || i>=b.size() || j<0 || j>=b[0].size() || b[i][j] != word[cnt])
            return false;
                
        
        char temp = b[i][j];                  
        b[i][j] = ' ';                         
        
        
        bool ans = dfs(i-1,j,cnt+1,b,word) ||  dfs(i+1,j,cnt+1,b,word) || dfs(i,j-1,cnt+1,b,word) ||
                   dfs(i,j+1,cnt+1,b,word);
        
        b[i][j] = temp;                        
        return ans;
    }
    
    bool exist(vector<vector<char>>& b, string word) 
    {
        int n = b.size();                  
        int m = b[0].size();                
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[i][j]==word[0] && dfs(i,j,0,b,word))           
                        return true;
                
            }
        }
        
        return false;
    }
};