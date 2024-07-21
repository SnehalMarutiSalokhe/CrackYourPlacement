#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        stringstream s(path);
        string dir;
        stack<string>st;

        while(getline(s,dir,'/')){
            if(dir =="" || dir == ".") continue;
            if(dir == ".."){
                if(!st.empty()) st.pop();
                continue;
            }
            st.push(dir);
        }
        string ans="";
        while(!st.empty()){
            ans = "/"+st.top() +ans;
            st.pop();
        }

        if(ans.length()==0) return "/";

        return ans;

    }
};