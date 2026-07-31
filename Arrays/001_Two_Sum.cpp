/*
Problem: Two Sum
LeetCode: 1
Difficulty: Easy

Approach:
Use a hash map to store previously seen numbers.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <vector>
#include <unordered_map> 
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            int required=target-nums[i];
            if (hash.find (required)!= hash.end()){
                return {hash [required], i};
            }
            hash[nums[i]]=i;
        }
        return {};
    }
};
