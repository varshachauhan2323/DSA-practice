class Solution {
public:
    vector<vector<int>>ans;
    void func(int ind,vector<int>&ds,int k,int n){
        if(ds.size()==k){
            ans.push_back(ds);
            return ;
        }
        for(int i=ind;i<=n;i++){
            ds.push_back(i);
            func(i+1,ds,k,n);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds;
        func(1,ds,k,n);
        return ans;
    }
};