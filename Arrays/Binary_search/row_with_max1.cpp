/*
Find Row with Maximum Number of 1s
Platform: LeetCode
Time Complexity: O(n log m)
Space Complexity: O(1)
*/

class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& mat) {
        int row = -1, maxOnes = 0;

        for (int i = 0; i < mat.size(); i++) {
            int ones = mat[i].size() -
                (lower_bound(mat[i].begin(), mat[i].end(), 1) - mat[i].begin());

            if (ones > maxOnes) {
                maxOnes = ones;
                row = i;
            }
        }
        return row;
    }
};
