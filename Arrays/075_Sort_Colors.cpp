/*
-------------------------------------------------------
Problem: Sort Colors
LeetCode: 75
Difficulty: Medium

Topic:
- Array
- Two Pointers
- Dutch National Flag Algorithm

Key Insight:
Instead of sorting the entire array, partition it into three regions:
- 0s on the left
- 1s in the middle
- 2s on the right

Approach:
Use three pointers:
- low: next position for 0
- mid: current element being processed
- high: next position for 2

Traverse the array once:
- If nums[mid] == 0, swap with nums[low] and move both pointers.
- If nums[mid] == 1, simply move mid.
- If nums[mid] == 2, swap with nums[high] and decrease high.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        return;
    }
};