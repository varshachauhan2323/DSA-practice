// Problem: Longest Subarray with Given Sum
// Platform: LeetCode / GFG
// Category: Arrays / Hashing
// Approach: Prefix Sum + Hash Map (Optimized)
// Idea:
// Store first occurrence of each prefix sum.
// If (currentSum - target) exists, a subarray with given sum is found.

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<int, int> prefixIndex;
        int sum = 0, maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            // If subarray from 0 to i has sum k
            if (sum == k) {
                maxLen = i + 1;
            }

            // If (sum - k) seen before, update max length
            if (prefixIndex.find(sum - k) != prefixIndex.end()) {
                maxLen = max(maxLen, i - prefixIndex[sum - k]);
            }

            // Store first occurrence of prefix sum
            if (prefixIndex.find(sum) == prefixIndex.end()) {
                prefixIndex[sum] = i;
            }
        }

        return maxLen;
    }
};
