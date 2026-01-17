// # Pascal's Triangle
// LeetCode

// Time Complexity: O(n^2)
// Space Complexity: O(n^2)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        // generate each row
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);   // first & last element = 1

            // fill middle elements
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.push_back(row);
        }

        return triangle;
    }
};
