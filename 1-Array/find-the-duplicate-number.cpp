#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(auto num:nums)
        {
            mpp[num]++;
            if(mpp[num]>1) return num;
        }

        return -1;
    }
};