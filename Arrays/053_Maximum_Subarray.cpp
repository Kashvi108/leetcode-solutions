/*
-------------------------------------------------------
Problem: Maximum Subarray
LeetCode: 53
Difficulty: Medium

Topic:
- Array
- Dynamic Programming
- Kadane's Algorithm

Key Insight:
At every index, decide whether to:
- Start a new subarray from the current element, or
- Extend the existing subarray.
Choose the option that gives the maximum sum.

Approach:
- Initialize both current sum and maximum sum with the first element.
- For each remaining element:
  - Update the current sum as the maximum of:
    1. Current element itself.
    2. Current element + previous current sum.
- Update the maximum sum after every iteration.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/


#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currsum=max(nums[i],currsum + nums[i]);
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};
