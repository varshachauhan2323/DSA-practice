class disjoint{
    public:
    vector<int>parent,size;
    disjoint(int n){
        size.resize(n+1,1);
        parent.resize(n+1,1);
        for(int i=0;i<n;i++) parent[i]=i;
    }
    int findparent(int node){
        if(parent[node]==node) return node;
        return parent[node]=findparent(parent[node]);
    }
    void unionbysize(int u,int v){
        int pu=findparent(u);
        int pv=findparent(v);
        if(pu==pv) return ;
        if(size[pu]<size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
        else if(size[pv]<size[pu]){
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
        else {
             parent[pv]=pu;
            size[pu]+=size[pv];
        }
    }
};
class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        disjoint ds(n*n);
                int maxsize=0;

        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col]==0) continue;
                int node=row*n+col;
                int dr[]={-1,0,1,0};
                int dc[]={0,1,0,-1};
                for(int i=0;i<4;i++){
                    int newr=row+dr[i];
                    int  newc=col+dc[i];
                    if(newr>=0&&newr<n&&newc>=0&&newc<n&&grid[newr][newc]==1){
                        int newnode=newr*n+newc;
                        ds.unionbysize(node,newnode);
                    }
                }
            }
        }
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col]==1) continue;
                        unordered_set<int>st;

                  int node=row*n+col;
                int dr[]={-1,0,1,0};
                int dc[]={0,1,0,-1};
                for(int i=0;i<4;i++){
                    int newr=row+dr[i];
                    int  newc=col+dc[i];
                    if(newr>=0&&newr<n&&newc>=0&&newc<n&&grid[newr][newc]==1){
                        int newnode=newr*n+newc;
                        st.insert(ds.findparent(newnode));

            }
        }
        int sizee=0;
        for(auto it:st){
            sizee+=ds.size[it];
        }
        maxsize=max(maxsize,sizee+1);
            }}
            for(int cells=0;cells<n*n;cells++){
                maxsize=max(maxsize,ds.size[ds.findparent(cells)]);
            }
            return maxsize;
        }
    
};