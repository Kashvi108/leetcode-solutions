/*
-------------------------------------------------------
Problem: Merge Sorted Array
LeetCode: 88
Difficulty: Easy

Topic:
- Array
- Two Pointers

Approach:
Merge the two sorted arrays from the end to avoid shifting elements.
Use three pointers:
- i points to the last valid element of nums1.
- j points to the last element of nums2.
- idx points to the last position of nums1.
Compare the elements from the end and place the larger one at idx.
If elements remain in nums2, copy them into nums1.

Time Complexity: O(m + n)
Space Complexity: O(1)
-------------------------------------------------------
*/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] >= nums2[j]) {
                nums1[idx] = nums1[i];
                i--;
            } else {
                nums1[idx] = nums2[j];
                j--;
            }
            idx--;
        }

        while (j >= 0) {
            nums1[idx] = nums2[j];
            idx--;
            j--;
        }
    }
};