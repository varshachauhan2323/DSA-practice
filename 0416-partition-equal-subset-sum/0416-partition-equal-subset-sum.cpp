class Solution {
public:
    bool find(int ind,int target,vector<vector<int>>&dp,vector<int>&nums){
        if(target==0) return true;
        if(ind==0) return nums[ind]==target;
        if(dp[ind][target]!=-1) return dp[ind][target];
        bool nottake=find(ind-1,target,dp,nums);
        bool take=false;
        if(nums[ind]<=target){
            take=find(ind-1,target-nums[ind],dp,nums);
        }
        return dp[ind][target]=take||nottake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2==1) return false;
        int target=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return find(n-1,target,dp,nums);
    }
};