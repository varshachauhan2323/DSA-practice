class Solution {
public:
    int find(int row,int col,vector<vector<int>>&dp){
        // memoization solution in this we are avoiding overlapping problems and we consider the base case first since we can move from first to last we are moving from last to first and directions given in the q was left and down so when we are moving from the bottom right corner the directions will be up and right to reach the top left corner 
        if(row==0&&col==0) return 1;
        if(row<0||col<0) return 0;
        if(dp[row][col]!=-1) return dp[row][col];
        int up=find(row-1,col,dp);
        int left=find(row,col-1,dp);
        return dp[row][col]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return find(m-1,n-1,dp);
    }
};