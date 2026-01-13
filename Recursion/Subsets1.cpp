//Platform:Leetcode
// Backtracking to generate all subsets
// At each index: pick or not pick
// No duplicates in input
// Time: O(2^n × n)
// Space: O(n) recursion stack (excluding output)
class Solution {
public:
    void func(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        func(ind+1,nums,ds,ans);
        ds.pop_back();
        func(ind+1,nums,ds,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        func(0,nums,ds,ans);
        return ans;
    }
};