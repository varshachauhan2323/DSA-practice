/*
Question Name: Remove K Digits
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char c : num) {
            while (!st.empty() && k > 0 && st.top() > c) {
                st.pop();
                k--;
            }
            st.push(c);
        }

        // If k is still left, remove from the end
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Build answer string
        string ans = "";
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int idx = 0;
        while (idx < ans.size() && ans[idx] == '0') idx++;
        ans = ans.substr(idx);

        return ans.empty() ? "0" : ans;
    }
};
