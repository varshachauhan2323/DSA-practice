// Problem: Left Rotate Array by D Places
// Platform: LeetCode
// Category: Arrays
// Approach: Reversal Algorithm (Optimal)
// Idea:
// Reverse first D elements, reverse remaining elements,
// then reverse the entire array.

class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void leftRotateByD(vector<int>& nums, int d) {
        int n = nums.size();
        d = d % n;  // handle d > n

        reverse(nums, 0, d - 1);
        reverse(nums, d, n - 1);
        reverse(nums, 0, n - 1);
    }
};
