// Problem: Move All Zeros to the End of Array
// Platform: LeetCode
// Category: Arrays / Two Pointers
// Approach: Two Pointers (Optimized)
// Idea:
// Move non-zero elements to the front while maintaining order,
// then fill remaining positions with zeros.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;  // position to place next non-zero

        // Place all non-zero elements at the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }

        // Fill remaining positions with zeros
        while (index < nums.size()) {
            nums[index] = 0;
            index++;
        }
    }
};
