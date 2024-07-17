#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int, int> mpp ;
        mpp[0] =1;
        int sum =0,cnt =0;

        for(int i=0;i<nums.size();i++)
        {
            sum = (sum + nums[i])%k;

            if(sum<0) sum+=k;
            if(mpp.find(sum) != mpp.end())
            {
                cnt+= mpp[sum];
                mpp[sum]++;

            } else mpp[sum]=1;
        }

        return cnt;
    }


};