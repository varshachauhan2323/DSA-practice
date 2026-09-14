class Solution {
public:
    int find(int row,int col,int n,vector<vector<int>>&triangle,vector<vector<int>>&dp){
        if(row==n-1) return triangle[row][col];
        if(dp[row][col]!=INT_MAX) return dp[row][col];
        int d=triangle[row][col]+find(row+1,col,n,triangle,dp);
        int dg=triangle[row][col]+find(row+1,col+1,n,triangle,dp);
        return dp[row][col]=min(d,dg);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        return find(0,0,n,triangle,dp);
    }
};