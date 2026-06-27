/*
Problem: Two Sum

Difficulty: Easy

Approach:
Use two nested loops to check every possible pair.
If nums[i] + nums[j] equals the target,
return their indices.

Time Complexity:
O(n²)

Space Complexity:
O(1)

LeetCode Submission:
Accepted (63/63 Test Cases)
Runtime: 43 ms (Beats 24.22%)
Memory: 13.92 MB (Beats 94.57%)

Solved on:
27 June 2026
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {0};
    }
};
