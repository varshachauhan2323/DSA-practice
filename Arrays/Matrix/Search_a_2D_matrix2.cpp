//Platform:Leetcode
// Treat matrix as a sorted 1D array
// Apply binary search
// Map mid index to (row, col)
// Time: O(log(m × n))
// Space: O(1)
    
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        int col=n-1;
        while(row<m&&col>=0){
            int el=matrix[row][col];
            if(target==el) return true;
            else if(target>el) row++;
            else col--;

        }
        return false;
    }
};