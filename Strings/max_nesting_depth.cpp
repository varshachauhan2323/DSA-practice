    /*
Question Name: Maximum Nesting Depth of Parentheses
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, maxDepth = 0;

        for (char c : s) {
            if (c == '(') {
                depth++;
                maxDepth = max(maxDepth, depth);
            } else if (c == ')') {
                depth--;
            }
        }
        return maxDepth;
    }
};
