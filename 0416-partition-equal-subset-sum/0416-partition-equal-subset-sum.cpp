class Solution {
public:
   
    bool canPartition(vector<int>& nums) {
        int sum=0;
        sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2==1) return false;
        int k=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=1;
        }
        if(nums[0]<=k)dp[0][nums[0]]=1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                int nottake=dp[i-1][j];
                int take=0;
                if(nums[i]<=j){
                    take=dp[i-1][j-nums[i]];
                }
                dp[i][j]=take||nottake;
            }
        }
        return dp[n-1][k];
    }
};