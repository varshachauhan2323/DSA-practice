// Problem: Max Consecutive Ones
// Platform: LeetCode
// Category: Arrays
// Approach: Single Pass 
// Idea:
// Traverse the array and count consecutive 1s.
// Reset count when a 0 is encountered and track the maximum.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};
