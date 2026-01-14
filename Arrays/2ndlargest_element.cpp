// Problem: Two Largest Elements in an Array
// Platform: gfg
// Category: Arrays
// Approach: Single Pass (Optimized)
// Idea:
// Maintain two variables for the largest and second largest elements.

class Solution {
public:
    vector<int> twoLargest(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int num : nums) {
            // Update largest and second largest
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            }
            // Update second largest if num lies between
            else if (num < largest && num > secondLargest) {
                secondLargest = num;
            }
        }

        // If second largest does not exist
        if (secondLargest == INT_MIN)
            return {-1};

        return {largest, secondLargest};
    }
};
