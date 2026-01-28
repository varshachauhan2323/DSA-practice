//longest substring without repeating characters
//platform: leetcode
//time complexity: O(n)
//space complexity: O(min(m,n)) where m is the size of the charset and n is the size of the string
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex;
        int maxLength = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); right++) {
            if (charIndex.find(s[right]) != charIndex.end() && charIndex[s[right]] >= left) {
                left = charIndex[s[right]] + 1;
            }
            
            charIndex[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};

