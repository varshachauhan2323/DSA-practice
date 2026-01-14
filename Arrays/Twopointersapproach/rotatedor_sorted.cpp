// Problem: Check if Array is Sorted and Rotated
// Platform: LeetCode
// Category: Arrays
// Approach: Single Pass (Optimized)
// Idea:
// In a sorted and rotated array, there can be at most
// one place where the order breaks (considering circular order).

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Compare current element with next (circular comparison)
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};
