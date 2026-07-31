/*
-------------------------------------------------------
Problem: Rotate Array
LeetCode: 189
Difficulty: Medium

Topic:
- Array
- Two Pointers

Key Insight:
Instead of rotating the array one step at a time, reverse the entire array,
then reverse the first k elements and finally reverse the remaining elements.
This rotates the array in-place without using extra space.

Approach:
- Compute k = k % n to handle cases where k > n.
- Reverse the entire array.
- Reverse the first k elements.
- Reverse the remaining n - k elements.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};