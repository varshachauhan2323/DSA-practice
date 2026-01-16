// # Longest Subarray with Sum Equals K
// LeetCode (Prefix Sum + HashMap approach)

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<int, int> mp;   // prefixSum -> first index
        int prefixSum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            // if entire prefix sum equals k
            if (prefixSum == k) {
                maxLen = i + 1;
            }

            // if (prefixSum - k) exists, subarray found
            if (mp.find(prefixSum - k) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefixSum - k]);
            }

            // store prefix sum only if not already present
            if (mp.find(prefixSum) == mp.end()) {
                mp[prefixSum] = i;
            }
        }

        return maxLen;
    }
};
