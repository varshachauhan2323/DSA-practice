class Solution {
public:
void dfs(vector<vector<int>>&image,int sr,int sc,int color,vector<vector<int>>&vis,int oc,int n,int m,    vector<vector<int>>&ans){
    vis[sr][sc]=1;
    ans[sr][sc]=color;
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};
    for(int i=0;i<4;i++){
        int newr=sr+dr[i];
        int newc=sc+dc[i];
        if(newr>=0&&newr<n&&newc>=0&&newc<m&&!vis[newr][newc]&&image[newr][newc]==oc){
                dfs(image,newr,newc,color,vis,oc,n,m,ans);
            
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>ans=image;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int oc=image[sr][sc];
        dfs(image,sr,sc,color,vis,oc,n,m,ans);
        return ans;
    }
};