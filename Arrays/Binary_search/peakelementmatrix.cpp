/*
Question Name: Find Peak Element in 2D Matrix
Platform: LeetCode
Time Complexity: O(n log m)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxRow(vector<vector<int>>& mat, int col) {
        int idx = 0;
        for (int i = 0; i < mat.size(); i++) {
            if (mat[i][col] > mat[idx][col])
                idx = i;
        }
        return idx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0, high = mat[0].size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int row = maxRow(mat, mid);

            bool left = mid == 0 || mat[row][mid] > mat[row][mid - 1];
            bool right = mid == mat[0].size() - 1 || mat[row][mid] > mat[row][mid + 1];

            if (left && right) return {row, mid};
            else if (!left) high = mid - 1;
            else low = mid + 1;
        }
        return {-1, -1};
    }
};
