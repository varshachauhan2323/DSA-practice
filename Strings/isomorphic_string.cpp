/*
Question Name: Isomorphic Strings
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> m1(256, -1), m2(256, -1);

        for (int i = 0; i < s.size(); i++) {
            if (m1[s[i]] != m2[t[i]])
                return false;

            m1[s[i]] = m2[t[i]] = i;
        }
        return true;
    }
};
