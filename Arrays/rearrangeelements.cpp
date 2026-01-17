// # Rearrange Array Elements by Sign
// LeetCode

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int posIndex = 0;   // even indices
        int negIndex = 1;   // odd indices

        // place positive at even and negative at odd indices
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ans[posIndex] = nums[i];
                posIndex += 2;
            } else {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
        }

        return ans;
    }
};
