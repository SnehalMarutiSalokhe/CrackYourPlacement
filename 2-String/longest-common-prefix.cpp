#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
        int n = strs.size();     
       string ans =strs[0];
         for(int i=1;i<n;i++)
         {  
             string same ="";
             for(int j=0;j<ans.length();j++)
             {
                 if(ans[j]==strs[i][j])
                 {
                     same+=ans[j];
                 }
                 else break;
             }

             ans = same;
         }

        

         return ans;
    }
};
int main(){
    
    return 0;
}