    vector<int>parent,sizee;

class disjoint{
    public:
    disjoint(int n){
        sizee.resize(n+1,1);
        parent.resize(n+1,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }}
        
    
    int findparent(int node){
        if(parent[node]==node) return node;
       return  parent[node]=findparent(parent[node]);

    }
    void unionbysize(int u,int v){
        int ulpu=findparent(u);
        int ulpv=findparent(v);
        if(ulpu==ulpv) return;
        if(sizee[ulpu]<sizee[ulpv]){
            parent[ulpu]=ulpv;
            sizee[ulpv]+=sizee[ulpu];
        }
        else if(sizee[ulpu]>sizee[ulpv]){
            parent[ulpv]=ulpu;
            sizee[ulpu]+=sizee[ulpv];
        }
        else {
            parent[ulpv]=ulpu;
            sizee[ulpu]+=sizee[ulpv];
        }
    }

};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        disjoint ds(n);
        int cntextra=0;
        for(auto edge:connections){
            int u=edge[0];
            int v=edge[1];
            if(ds.findparent(u)==ds.findparent(v)) cntextra++;
            else {
                ds.unionbysize(u,v);
            }
        }
        int comp=0;
        for(int i=0;i<n;i++){
            if(parent[i]==i) comp++;
        }
        int ans=comp-1;
        if(cntextra>=ans) return ans;
        return -1;

    }
};