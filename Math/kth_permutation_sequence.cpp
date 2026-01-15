// Problem: Kth Permutation Sequence
// Platform: LeetCode
// Category: Math / Combinatorics
// Approach: Factorial Number System
// Idea:
// Total permutations starting with a fixed digit = (n-1)!
// Use k to decide which digit to pick at each position.

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact = 1;

        // Store numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            numbers.push_back(i);
            fact *= i;
        }

        // Convert k to 0-based index
        k--;

        string ans = "";

        for (int i = n; i > 0; i--) {
            fact /= i;

            // Decide which number to pick
            int index = k / fact;
            ans += to_string(numbers[index]);

            // Remove used number
            numbers.erase(numbers.begin() + index);

            // Update k for remaining permutations
            k %= fact;
        }

        return ans;
    }
};
