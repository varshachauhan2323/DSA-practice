class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int ht=1;
        int n=parent.size();
        vector<vector<int>>adj(n);
        for(int i=1;i<n;i++){
            adj[parent[i]].push_back(i);
        }
        vector<int>depth(n,0);
        depth[0]=1;
        queue<int>q;
        q.push(0);
        long long sum=0;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            ht=max(ht,depth[curr]);
            for(auto child:adj[curr]){
                depth[child]=depth[curr]+1;
                q.push(child);
            }
        }
        for(int i=0;i<n;i++){
            sum+=1LL*(nums[i])*(ht-depth[i]+1);
            
        }
        return sum;
        
    }
};