class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&vis,int n,int m,vector<vector<char>>&grid){
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int newr=row+dr[i];
            int newc=col+dc[i];
            if(newr>=0&&newr<n&&newc>=0&&newc<m&&grid[newr][newc]=='1'&&!vis[newr][newc]){
                dfs(newr,newc,vis,n,m,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,vis,n,m,grid);
                }
            }
        }
        return cnt;
    }
};