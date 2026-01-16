//Platform:Leetcode
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // STEP 1: Transpose the matrix
        // matrix[i][j] -> matrix[j][i]
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // STEP 2: Reverse each row
        // This gives 90 degree clockwise rotation
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
