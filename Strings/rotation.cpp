/*
Question Name: Check if One String is Rotation of Another
Platform: LeetCode
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        return (s + s).find(goal) != string::npos;
    }
};
