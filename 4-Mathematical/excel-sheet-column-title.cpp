#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n>0){
            n--;
            int currentdigit = n%26;
            n = n/26;
            ans.push_back(currentdigit+'A');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};