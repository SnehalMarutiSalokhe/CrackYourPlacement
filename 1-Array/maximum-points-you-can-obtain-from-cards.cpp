#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum =0,rsum=0,maxsum=0;
        int rind=cardPoints.size()-1;
        for(int i=0;i<k;i++)
        lsum+= cardPoints[i];
        maxsum = max(maxsum,lsum+rsum);
        for(int i=k-1;i>=0;i--)
        {
            lsum = lsum-cardPoints[i];
            rsum = rsum+cardPoints[rind];
            rind--;
            maxsum = max(maxsum,lsum+rsum);
        }

        return maxsum;
    }
};