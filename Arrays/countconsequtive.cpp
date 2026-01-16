// # Longest Consecutive Sequence
// LeetCode

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        // traverse the array
        for (int num : nums) {

            // start sequence only if previous number doesn't exist
            if (st.find(num - 1) == st.end()) {
                int currentNum = num;
                int count = 1;

                // check consecutive numbers
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
