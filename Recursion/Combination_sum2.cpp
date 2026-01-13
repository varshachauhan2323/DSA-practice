//Platform:Leetcode
// Sort array to handle duplicates
// Use for-loop backtracking
// Skip duplicates at same recursion level
// Move to next index since reuse is not allowed
// Time: Exponential (backtracking)
// Space: O(n) recursion depth (excluding output)
class Solution {
public:
    void func(vector<vector<int>>&ans,vector<int>&ds,vector<int>&candidates,int target,int ind){
        if(target==0) {
        ans.push_back(ds);
        return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]>target) break;
            if(i>ind&&candidates[i]==candidates[i-1]) continue;
            ds.push_back(candidates[i]);
            func(ans,ds,candidates,target-candidates[i],i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        func(ans,ds,candidates,target,0);
        return ans;
    }
};