class Solution {
public:
    void dfs(int row,int col,int &top,int &left,int &right,int &bottom,vector<vector<int>>&vis,vector<vector<int>>&land,int n,int m){
        vis[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        top=min(top,row);
        left=min(left,col);
        right=max(right,col);
        bottom=max(right,row);
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&land[nrow][ncol]==1){
                dfs(nrow,ncol,top,left,right,bottom,vis,land,n,m);

            }

        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n=land.size();
        int m=land[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&land[i][j]==1){
                  int top=i;
                  int left=j;
                  int bottom=i;
                  int right=j;
                  dfs(i,j,top,left,right,bottom,vis,land,n,m);
                  ans.push_back({top,left,right,bottom});
                }
            }
        }
        return ans;
    }
};