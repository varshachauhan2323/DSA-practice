// Problem: Single Number
// Platform: LeetCode
// Category: Bit Manipulation / Arrays
// Approach: XOR
// Idea:
// XOR of same numbers is 0, and XOR with 0 gives the number itself.
// All duplicate numbers cancel out, leaving the unique number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int num : nums) {
            ans ^= num;
        }

        return ans;
    }
};
