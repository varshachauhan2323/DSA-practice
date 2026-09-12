class Solution {
public:
int find(int row,int col,vector<vector<int>>&arr,vector<vector<int>>&dp){
    if(row>=0&&col>=0&&arr[row][col]==1) return 0;
    if(row==0&&col==0) return 1;
    if(row<0||col<0) return 0;
    if(dp[row][col]!=-1) return dp[row][col];
    int up=find(row-1,col,arr,dp);
    int left=find(row,col-1,arr,dp);
    return dp[row][col]=(up+left); 
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int  m=obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return find(n-1,m-1,obstacleGrid,dp);
    }
};