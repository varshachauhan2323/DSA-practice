class Solution {
public:
    int find(int row,int j1,int j2,int n,int m,vector<vector<int>>& grid,vector<vector<vector<int>>>&dp){
        if(j1<0||j2<0||j1>=m||j2>=m) return -1e8;
        if(row==n-1){
            if(j1==j2) return grid[row][j1];
            return grid[row][j1]+grid[row][j2];
        }
        int maxi=-1e8;
        if(dp[row][j1][j2]!=-1) return dp[row][j1][j2];
        for(int dj1=-1;dj1<=1;dj1++){
            for(int dj2=-1;dj2<=1;dj2++){
                int value=0;
                if(j1==j2) value=grid[row][j1];
                else value=grid[row][j1]+grid[row][j2];
                value+=find(row+1,j1+dj1,j2+dj2,n,m,grid,dp);
                maxi=max(maxi,value);
            }
        }
        return dp[row][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<vector<int>>>dp(row,vector<vector<int>>(col,vector<int>(col,-1)));
       return  find(0,0,col-1,row,col,grid,dp);



    }
};