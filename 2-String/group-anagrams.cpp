#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mpp;
        vector<vector<string>> ans;

        for(int i =0;i<strs.size();i++){
            string sortWord = strs[i];
            sort(sortWord.begin(),sortWord.end());
            mpp[sortWord].push_back(strs[i]);
        }

        for(auto it:mpp)
            ans.push_back(it.second);


        return ans;
    }
};