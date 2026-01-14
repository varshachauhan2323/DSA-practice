// Problem: Rearrange Array Elements by Sign
// Platform: LeetCode
// Category: Arrays
// Approach: Two Pointers / Extra Array (Optimized)
// Idea:
// Place positive numbers at even indices and negative numbers at odd indices.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int posIndex = 0; // even indices
        int negIndex = 1; // odd indices

        for (int num : nums) {
            if (num > 0) {
                ans[posIndex] = num;
                posIndex += 2;
            } else {
                ans[negIndex] = num;
                negIndex += 2;
            }
        }

        return ans;
    }
};
