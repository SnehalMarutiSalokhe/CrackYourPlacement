#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
int func(vector<int>& nums, int sum)
{
    int partion = 1,partiSum=0;
    for(int i =0;i<nums.size();i++)
    {
        if(partiSum+nums[i] <= sum )
            partiSum+= nums[i];
        else {
            partion++;
            partiSum=nums[i];
        }
    }

    return partion;
}
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high =0;
        for(int i=0;i<nums.size();i++)
        {
            high+=nums[i];
        }

        while(low<=high)
        {
            int mid = (low+high)/2;

            int num_sub_arr = func(nums,mid);

            if(num_sub_arr <= k) high = mid-1;
            else low = mid+1;
        }

        return low;
    }
};