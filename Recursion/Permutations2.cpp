//Platform:Leetcode
// Swap-based backtracking
// Use unordered_set at each level to avoid duplicates
// Same value placed once per index
// Time: O(n! × n)
// Space: O(n) recursion stack + per-level set (excluding output)
class Solution {
public:
    void func(vector<vector<int>>&ans,vector<int>&nums,int ind){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int>used;// locally 
        for(int i=ind;i<nums.size();i++){
            if(used.count(nums[i])) continue;
            used.insert(nums[i]);
            swap(nums[ind],nums[i]);
            func(ans,nums,ind+1);
            swap(nums[ind],nums[i]);

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        func(ans,nums,0);
        return ans;
    }
};