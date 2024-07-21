#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
      
        int i =s.length()-1;
        string ans = "";
        string temp = "";
      
        while(i>=0)
        {
            if(s[i]!=' ')
                temp = s[i]+temp;              
            
            else if(s[i]==' '  && !temp.empty() )
            {
                if( ans.empty() ) ans = temp;
                else    ans = ans+ " " + temp;

                 temp = "";
            }

            i--;
        }
        if( !temp.empty() )
        {
                if( ans.empty() ) ans = temp;
                else    ans = ans+ " " + temp;

                 temp = "";
        }
        return ans;
    }
};