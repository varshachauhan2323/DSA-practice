class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cntfresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                if(grid[i][j]==1) cntfresh++;
            }
        }
        int cnt1=0;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        int time=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
             time=q.front().second;
             q.pop();
            
            for(int i=0;i<4;i++){
                int newr=row+dr[i];
                int newc=col+dc[i];
                if(newr>=0&&newr<n&&newc>=0&&newc<m&&grid[newr][newc]==1&&!vis[newr][newc]){
                    q.push({{newr,newc},time+1});
                    vis[newr][newc]=2;
                    cnt1++;
                }
            }
            
        }
        if(cntfresh!=cnt1) return -1;
        return time;
    }
};