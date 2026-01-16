// # Subarray with XOR Equals K
// Standard Prefix XOR + HashMap Problem

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int subarrayXor(vector<int>& nums, int k) {
        unordered_map<int, int> freq;  // prefixXor -> frequency
        int prefixXor = 0;
        int count = 0;

        // base case: prefixXor = 0 occurs once
        freq[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            prefixXor ^= nums[i];

            // if prefixXor ^ k exists, subarray found
            int required = prefixXor ^ k;
            if (freq.find(required) != freq.end()) {
                count += freq[required];
            }

            // store prefixXor frequency
            freq[prefixXor]++;
        }

        return count;
    }
};
