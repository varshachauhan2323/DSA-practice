class Solution {
public:
    bool dfs(int node, vector<int >&vis,  vector<int> &pathvis,vector<int>&check,vector<vector<int>>&adj){
        vis[node]=1;
        pathvis[node]=1;
        check[node]=0;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(dfs(it,vis,pathvis,check,adj)) return true;
            }
            else if(pathvis[it]) return true;
        }
        pathvis[node]=0;
        check[node]=1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int >vis(n,0);
        vector<int> pathvis(n,0);

        vector<int>ans;
        vector<int>check(n,0);
        
        for(int i=0;i<n;i++){
           if(!vis[i]){
                    dfs(i,vis,pathvis,check,graph);  }}
    for(int i=0;i<n;i++){
            if(check[i]) ans.push_back(i);
        }
    return ans;
        
    }
};