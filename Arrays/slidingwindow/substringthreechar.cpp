//substring with at least one occurrence of all characters a, b and c
//platform:leetcode
//time complexity: O(n)
//space complexity: O(1)
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> last(3, -1);
        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            last[s[i] - 'a'] = i;
            ans += 1 + min({last[0], last[1], last[2]});
        }
        return ans;
    }
};
