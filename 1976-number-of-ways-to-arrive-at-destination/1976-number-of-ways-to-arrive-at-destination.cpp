class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        int m=roads.size();
        vector<long long>dist(n,LLONG_MAX);
        vector<int>ways(n,0);
        ways[0]=1;
        dist[0]=0;
        vector<vector<pair<long long,int>>>adj(n);
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq;
        pq.push({0,0});
                    int mod=1e9+7;

        while(!pq.empty()){
            auto it=pq.top();
            long long  dis=it.first;
            int node=it.second;
            pq.pop();
            for(auto next:adj[node]){
                long long edgw=next.second;
                int nxtnode=next.first         ;
                if((dis+edgw)<dist[nxtnode]){
                    dist[nxtnode]=dis+edgw;
                    ways[nxtnode]=ways[node];
                    pq.push({dist[nxtnode],nxtnode});
                }
                else if(dis+edgw==dist[nxtnode]){
                    ways[nxtnode]=(ways[nxtnode]+ways[node])%mod;
                }
            }
        }
    return ways[n-1]% mod;
    }
};