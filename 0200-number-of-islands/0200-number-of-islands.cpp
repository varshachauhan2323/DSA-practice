class Solution {
public:
    void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&grid,int n,int m){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int rowno=q.front().first;
            int colno=q.front().second;
            q.pop();
            int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                    int r=rowno+delrow[i];
                    int c=colno+delcol[i];
                    if(r>=0&&r<n&&c>=0&&c<m&&!vis[r][c]&&grid[r][c]=='1'){
                        vis[r][c]=1;
                        q.push({r,c});

                    }
                }
            }


        }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!vis[row][col]&&grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,vis,grid,n,m);
                }
            }
        }
        return cnt;
    }
};