/*
Matrix Median
Platform: LeetCode
Time Complexity: O(log(1e9) * n log m)
Space Complexity: O(1)
*/

class Solution {
public:
    int countSmaller(vector<int>& row, int mid) {
        return upper_bound(row.begin(), row.end(), mid) - row.begin();
    }

    int findMedian(vector<vector<int>>& mat) {
        int low = 1, high = 1e9;
        int n = mat.size(), m = mat[0].size();

        while (low <= high) {
            int mid = (low + high) / 2;
            int cnt = 0;

            for (auto& row : mat)
                cnt += countSmaller(row, mid);

            if (cnt <= (n * m) / 2)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};
