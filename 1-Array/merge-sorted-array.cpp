#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> ans(m + n, 0);
   int left = 0, right = 0, ind = 0;
   while (left < m && right < n)
   {
      if (nums1[left] < nums2[right])
      {
         ans[ind++] = nums1[left++];
      }
      else
      {
         ans[ind++] = nums2[right++];
      }
   }
   cout << endl
        << left << "   right " << right << endl;

   while (right < n)
   {
      ans[ind++] = nums2[right++];
   }

   while (left < m)
   {
      ans[ind++] = nums1[left++];
   }

   for (int i = 0; i < m + n; i++)
   {
      nums1[i] = ans[i];
   }
    }
};