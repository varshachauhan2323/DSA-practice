// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Category: Arrays / Two Pointers
// Approach: Two Pointers (Optimized)
// Idea:
// Use one pointer to track position of unique elements.
// Traverse array and place unique elements at the front.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int k = 1;  // index for placing unique elements

        for (int i = 1; i < nums.size(); i++) {
            // If current element is different, place it
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;  // number of unique elements
    }
};
