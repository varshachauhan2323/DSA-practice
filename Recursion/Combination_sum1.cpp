//Platform:Leetcode 
//Backtracking to find all combinations
// Same element can be reused → stay on same index
// Move forward only-> avoids duplicate combinations
// Time: Exponential (backtracking)
// Space: O(target) recursion depth (excluding output)
class Solution {
public:
    void func(vector<vector<int>>&ans,vector<int>&ds,vector<int>&candidates,int target,int ind){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            func(ans,ds,candidates,target-candidates[ind],ind);
            ds.pop_back();
        }
        func(ans,ds,candidates,target,ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        func(ans,ds,candidates,target,0);
        return ans;
        
            }
};
