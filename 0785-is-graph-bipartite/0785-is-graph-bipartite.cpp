class Solution {
public:
    bool check(int start,int n,vector<int>&color,vector<vector<int>>&graph,vector<vector<int>>&adj){
        color[start]=0;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int node=q.front();
            int col=color[node];
            q.pop();
            for(auto it:adj[node]){
                if(color[it]==-1){
                    q.push(it);
                    color[it]=1-color[node];

                }
               else if(color[it]==color[node]) return false;
            }
        }
    return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
        for(auto it:graph[i]){
            adj[i].push_back(it);
        }}
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(color[i]==-1){
                    if(check(i,n,color,graph,adj)==false) return false;
                }
            }}
            return true;
        }};