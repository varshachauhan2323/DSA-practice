class Solution {
public:
void dfs1(int node,vector<vector<int>>&adj,vector<int>&vis,stack<int>&st){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs1(it,adj,vis,st);
        }

    }
    st.push(node);
}
void dfs2(int node,vector<vector<int>>&revadj,vector<int>&vis,vector<int>&component){
    vis[node]=1;
    component.push_back(node);
    for(auto it:revadj[node]){
        if(!vis[it]){
            dfs2(it,revadj,vis,component);
        }
    }
}
    vector<string> maxNumOfSubstrings(string s) {
        // track first and last occurence of characters
        int n=s.length();
        vector<int>first(26,-1);
        vector<int>last(26,-1);
        for(int i=0;i<n;i++){
            int ch=s[i]-'a';
            if(first[ch]==-1){
                first[ch]=i;


            }
            last[ch]=i;
        }
        //build the graph 
        vector<vector<int>>adj(26);
        for(int i=0;i<26;i++){
            if(first[i]==-1) continue;
            for(int j=first[i];j<=last[i];j++){
                int other=s[j]-'a';
                if(other!=i){
                    adj[i].push_back(other);
                                    }
            }
        }

        vector<int>vis(26,0);
        stack<int>st;
        for(int i=0;i<26;i++){
            if(!vis[i]){
                dfs1(i,adj,vis,st);
            }
        }
        vector<vector<int>>revadj(26);
        for(int i=0;i<26;i++){
        for(auto it:adj[i]){
                        revadj[it].push_back(i);}}
        
        vis.assign(26,0);
        vector<pair<int,int>>intervals;
        while(!st.empty()){
            int node=st.top();
            st.pop();
            if(!vis[node]){
                vector<int>components;
                dfs2(node,revadj,vis,components);
            
            int l=INT_MAX;
            int r=INT_MIN;
            for(auto ch:components){
                l=min(l,first[ch]);
                r=max(r,last[ch]);
            }
            intervals.push_back({l,r});
            }}
    // sort the interval based on the last 
    sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
        return a.second<b.second;
    });
    vector<string>ans;
    int prevend=-1;
    for(auto it:intervals){
        int l=it.first;
        int r=it.second;
        if(l>prevend){
            ans.push_back(s.substr(l,r-l+1));
            prevend=r;
        }
    }
    return ans;
    }
};