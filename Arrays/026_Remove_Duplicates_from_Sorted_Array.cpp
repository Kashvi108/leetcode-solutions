/*
-------------------------------------------------------
Problem: Remove Duplicates from Sorted Array
LeetCode: 26
Difficulty: Easy

Topic:
- Array
- Two Pointers

Approach:
Use two pointers:
- The first pointer (i) keeps track of the position of the last unique element.
- The second pointer (j) traverses the array.
- Whenever a new unique element is found, place it at index i + 1.
- Return the count of unique elements.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};