/*
Question Name: Maximum Number of Balloons
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26, 0);

        for (char c : text) {
            freq[c - 'a']++;
        }

        // "balloon" needs: b=1, a=1, l=2, o=2, n=1
        int b = freq['b' - 'a'];
        int a = freq['a' - 'a'];
        int l = freq['l' - 'a'] / 2;
        int o = freq['o' - 'a'] / 2;
        int n = freq['n' - 'a'];

        return min({b, a, l, o, n});
    }
};
