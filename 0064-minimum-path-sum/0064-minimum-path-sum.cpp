class Solution {
public:
/* Why INT_MAX doesn't work?
INT_MAX = 2,147,483,647

If we do:

INT_MAX + grid[row][col]

the value exceeds the maximum int limit → integer overflow.

Overflow can make the value negative.
Then min(up, left) may incorrectly choose this negative value.
Why 1e9 works?
1e9 + grid[row][col]

still stays within the int range, so no overflow occurs.

Rule: If an "infinity" value will be added later, avoid INT_MAX; use a safe large value like 1e9.*/
// Memoization method 
    int find(int row, int col,vector<vector<int>>& grid,vector<vector<int>>&dp) {
        if(row==0&&col==0) return grid[row][col];
        if(row<0||col<0) return 1e9;
        if(dp[row][col]!=-1) return dp[row][col];
        int up=grid[row][col]+find(row-1,col,grid,dp);
        int left=grid[row][col]+find(row,col-1,grid,dp);
        return dp[row][col]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return find(n-1,m-1,grid,dp);
    }
};