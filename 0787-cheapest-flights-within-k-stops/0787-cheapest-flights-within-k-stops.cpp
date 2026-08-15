class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});//{stop,{src(city),cost}};
        vector<int>dist(n,1e9);
        dist[src]=0;
        vector<pair<int,int>>adj[n];
        for(auto it:flights){
            adj[it[0]].push_back({it[1],it[2]});//it[0]-> from that city it[1]--> to that city and it[2]-->cost
        }
        while(!q.empty()){
            auto it=q.front();
            int stop=it.first;
            int currcity=it.second.first;
            int currcost=it.second.second;
            q.pop();
            if(stop>k) continue;
            for(auto edge:adj[currcity]){
                int city=edge.first;
                int cost=edge.second;
                if(cost+currcost<dist[city]&&stop<=k){
                    dist[city]=cost+currcost;
                    q.push({stop+1,{city,dist[city]}});
                }
            }
        }
        if(dist[dst]!=1e9) return dist[dst];
        return -1;
    }
};