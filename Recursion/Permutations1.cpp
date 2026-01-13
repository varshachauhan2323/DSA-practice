//Platform:Leetcode
// Swap-based backtracking
// Fix one position at a time
// Try all elements for current index
// Time: O(n! × n)
// Space: O(n) recursion stack (excluding output)

class Solution {
public:
    void func(vector<vector<int>>&ans,vector<int>&nums,int ind){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            func(ans,nums,ind+1);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        func(ans,nums,0);
        return ans;
    }
};