#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
       int cur = nums[0];

        for (int i = 0; i < nums.size(); ++i) {
            if (cur >= nums.size() - 1) return true;

            if (nums[i] == 0 && cur == i) return false;

            if (i + nums[i] > cur) cur = i + nums[i];
        }

        return true;
    }
};