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
A negative running sum can never help increase the maximum subarray sum.
If the current sum becomes negative, start a new subarray from the current element.

Approach:
Use Kadane's Algorithm:
- Maintain a running sum of the current subarray.
- At each element, either extend the current subarray or start a new one.
- Keep track of the maximum sum encountered during traversal.

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