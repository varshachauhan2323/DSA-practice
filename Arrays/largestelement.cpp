// Problem: Largest Element in an Array
// Platform: gfg
// Category: Arrays
// Approach: Single Pass (Optimized)
// Idea:
// Traverse the array once and keep updating the maximum element.

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }

        return largest;
    }
};
