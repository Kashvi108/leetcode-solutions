/*
-------------------------------------------------------
Problem: Move Zeroes
LeetCode: 283
Difficulty: Easy

Topic:
- Array
- Two Pointers

Key Insight:
Find the position of the first zero and move all non-zero elements
forward by swapping them with the earliest available zero. This
maintains the relative order of non-zero elements while moving all
zeroes to the end.

Approach:
- Find the index of the first zero.
- If there are no zeroes, return immediately.
- Traverse the remaining array.
- Whenever a non-zero element is found, swap it with the first zero.
- Move the zero pointer forward after each swap.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;

        // Find the first zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1)
            return;

        // Move non-zero elements forward
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};