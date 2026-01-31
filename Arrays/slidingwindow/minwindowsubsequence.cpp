/*
Question Name: Minimum Window Subsequence
Platform: LeetCode
Time Complexity: O(n * m)
Space Complexity: O(1)
*/

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        int minLen = INT_MAX, start = -1;

        for (int i = 0; i < n; i++) {
            int j = 0, k = i;

            while (k < n && j < m) {
                if (s[k] == t[j]) j++;
                k++;
            }

            if (j == m) {
                int end = k - 1;
                j = m - 1;

                while (j >= 0) {
                    if (s[k - 1] == t[j]) j--;
                    k--;
                }

                k++;
                if (end - k + 1 < minLen) {
                    minLen = end - k + 1;
                    start = k;
                }
            }
        }
        return start == -1 ? "" : s.substr(start, minLen);
    }
};
