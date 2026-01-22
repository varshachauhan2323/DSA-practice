/*
Question Name: Reverse Words in a String
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string reverseWords(string s) {
        string word = "", ans = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                reverse(word.begin(), word.end());
                ans += word + " ";
                word = "";
            }
        }
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            ans += word;
        }
        if (!ans.empty() && ans.back() == ' ') ans.pop_back();
        return ans;
    }
};
