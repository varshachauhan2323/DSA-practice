// # Lucky Integer in an Array
// LeetCode

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        // count frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        int ans = -1;

        // check lucky integers
        for (auto it : freq) {
            if (it.first == it.second) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};
