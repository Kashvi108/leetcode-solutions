/*
-------------------------------------------------------
Problem: Remove Element
LeetCode: 27
Difficulty: Easy

Topic:
- Array
- Two Pointers

Approach:
Traverse the array once using a pointer.
Whenever an element is not equal to 'val', place it at the next valid position.
The variable 'k' keeps track of the length of the modified array.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/

#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
