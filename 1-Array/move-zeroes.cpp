class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=1;
       while( i<n && j<n)
       {
           if(nums[i]!=0)
           {
               i++;
               j++;
           }
           else if(nums[i]==0)
           {
               if(nums[j]!=0)
               {
                   swap(nums[i],nums[j]);
                   i++;
                   j++;
               }
               else j++;
           }
       }
    }
};