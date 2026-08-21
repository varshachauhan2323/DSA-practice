class Solution {
public:
    void dfs(vector<vector<int>>&image,int sr,int sc,int color,int inicolor,vector<vector<int>>&ans,vector<vector<int>>&vis){
        ans[sr][sc]=color;
        vis[sr][sc]=1;
        int n=image.size();
        int m=image[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int newrow=sr+delrow[i];
            int newcol=sc+delcol[i];
            if(newrow>=0&&newrow<n&&newcol>=0&&newcol<m&&!vis[newrow][newcol]&&image[newrow][newcol]==inicolor){
                dfs(image,newrow,newcol,color,inicolor,ans,vis);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor=image[sr][sc];
        vector<vector<int>>ans=image;
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        dfs(image,sr,sc,color,inicolor,ans,vis);
        return ans;
    }
};