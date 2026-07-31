/*
-------------------------------------------------------
Problem: Majority Element
LeetCode: 169
Difficulty: Easy

Topic:
- Array
- Boyer-Moore Voting Algorithm

Key Insight:
If an element appears more than n/2 times, it cannot be completely canceled
out by all other elements. The remaining candidate will always be the majority element.

Approach:
Maintain a candidate and a counter.
- If the counter becomes 0, choose the current element as the new candidate.
- If the current element matches the candidate, increment the counter.
- Otherwise, decrement the counter.
After one traversal, the candidate is guaranteed to be the majority element.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el;

        // Find candidate
        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                count = 1;
                el = nums[i];
            }
            else if(nums[i] == el) {
                count++;
            }
            else {
                count--;
            }
        }

        // Verify candidate
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == el) {
                cnt++;
            }

            if(cnt > nums.size() / 2) {
                return el;
            }
        }

        return -1;
    }
};