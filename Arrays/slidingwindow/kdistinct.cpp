/*
Question Name: Longest Substring with At Most K Distinct Characters
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(k)
*/

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        if (k == 0) return 0;

        unordered_map<char, int> freq;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++;

            while (freq.size() > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0)
                    freq.erase(s[left]);
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
