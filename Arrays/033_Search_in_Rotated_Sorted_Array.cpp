/*
-------------------------------------------------------
Problem: Search in Rotated Sorted Array
LeetCode: 33
Difficulty: Medium

Topic:
- Binary Search

Key Insight:
Even after rotation, at least one half of the array is always sorted.
Identify the sorted half and determine whether the target lies within
that range. Discard the other half and continue the binary search.

Approach:
- Apply Binary Search.
- Find the middle element.
- Check whether the left half or the right half is sorted.
- If the target lies in the sorted half, search there.
- Otherwise, search in the other half.

Time Complexity: O(log n)
Space Complexity: O(1)
-------------------------------------------------------
*/

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if (nums[mid]==target)
            return mid;
            if(nums[st]<=nums[mid]){
            if(nums[st]<=target&& target<=nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && target<=nums[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        }
    
    return -1;
    }
};
