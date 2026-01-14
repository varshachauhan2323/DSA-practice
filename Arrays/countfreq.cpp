// Problem: Count Frequency of Elements
// Platform: GFG
// Category: Hashing
// Approach: Unordered Map (Optimized)
// Idea:
// Traverse the array and store count of each element using hashing.

class Solution {
public:
    unordered_map<int, int> countFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        return freq;
    }
};
