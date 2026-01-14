// Problem: Check if the Array is Sorted
// Platform: LeetCode
// Category: Arrays
// Approach: Single Pass (Optimized)
// Idea:
// Traverse the array and ensure every element is >= the previous one.

class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            // If current element is smaller than previous, array is not sorted
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }
        return true;
    }
};
