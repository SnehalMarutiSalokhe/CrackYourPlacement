#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')) {
                return false;
            } else {
                st.pop();
            }
        }
        return st.empty();
    }
};