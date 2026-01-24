    /*
Question Name: Sum of Beauty of All Substrings
Platform: LeetCode
Time Complexity: O(n^2 * 26)
Space Complexity: O(26)
*/

class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < s.size(); j++) {
                freq[s[j] - 'a']++;

                int mx = 0, mn = INT_MAX;
                for (int f : freq) {
                    if (f > 0) {
                        mx = max(mx, f);
                        mn = min(mn, f);
                    }
                }
                ans += (mx - mn);
            }
        }
        return ans;
    }
};
