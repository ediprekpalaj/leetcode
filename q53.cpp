#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        //Kadane’s Algorithm
        int max = INT_MIN, curr =0;
        
        for(int i=0;i<nums.size();i++)
        {
            curr += nums[i];
            if(max < curr)
                max = curr;
            if(curr < 0)
                curr = 0;
        }
        return max;
    }
};