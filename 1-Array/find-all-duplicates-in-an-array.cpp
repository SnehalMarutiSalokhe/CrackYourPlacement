#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int> ans;
         map<int,int>mpp;
         for(auto no:nums)
         {
            mpp[no]++;
            if(mpp[no] >= 2)
            {
                ans.push_back(no);
                mpp[no]--;
            }
         }

         return ans;
    }
};