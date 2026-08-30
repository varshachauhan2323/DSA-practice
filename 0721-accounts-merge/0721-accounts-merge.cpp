class disjoint{
    public:
    vector<int>parent,size;
    disjoint(int n){
        parent.resize(n+1,1);
        size.resize(n+1,1);
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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,int>mpp;
        int n=accounts.size();
        disjoint ds(n);
        for(int i=0;i<n;i++){
            int m=accounts[i].size();
            for(int j=1;j<m;j++){
                string mail=accounts[i][j];
                if(mpp.find(mail)==mpp.end()){
                    mpp[mail]=i;//inserting mail for the first time 
                }
                else if(mpp.find(mail)!=mpp.end()){
                    ds.unionbysize(mpp[mail],i);
                }
            }
        }
        vector<vector<string>>mergedmail(n);
    for(auto it:mpp){
        string mail=it.first;
        int node=ds.findparent(it.second);
        mergedmail[node].push_back(mail);
    }
    vector<vector<string>>ans;
    for(int i=0;i<n;i++){
        if(mergedmail[i].size()==0) continue;

        string name=accounts[i][0];
        sort(mergedmail[i].begin(),mergedmail[i].end());
        vector<string>temp;
        temp.push_back(name);
        for(auto it:mergedmail[i]){
            temp.push_back(it);
        }
        ans.push_back(temp);
    }
    return ans;}
};