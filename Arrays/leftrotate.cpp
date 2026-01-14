// Problem: Left Rotate Array by One Place
// Platform: LeetCode
// Category: Arrays
// Approach: Shifting
// Idea:
// Store first element, shift others left, put first at the end.

class Solution {
public:
    void leftRotateByOne(vector<int>& nums) {
        int n = nums.size();
        int first = nums[0];

        for (int i = 1; i < n; i++) {
            nums[i - 1] = nums[i];
        }

        nums[n - 1] = first;
    }
};
