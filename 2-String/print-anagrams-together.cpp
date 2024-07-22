#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

   vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string,vector<string>> um;
        
        for(auto z:string_list){
            string p=z;
            sort(p.begin(),p.end());
            
            um[p].push_back(z);
            
        }
        
        vector<vector<string>> ans;
        
        for(auto cc:um){
            ans.push_back(cc.second);
        }
        
        return(ans);
    }