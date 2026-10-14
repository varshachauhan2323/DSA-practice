class Solution {
public:
    int find(int ind,int amt,vector<int>&coins,vector<vector<int>>&dp){
        if(ind==0){
            if(amt%coins[0]==0) return 1;
            return 0;

        }
        if(dp[ind][amt]!=-1) return dp[ind][amt];
        int nottake=find(ind-1,amt,coins,dp);
        int take=0;
        if(coins[ind]<=amt) take=find(ind,amt-coins[ind],coins,dp);
        return dp[ind][amt]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=find(n-1,amount,coins,dp);    
        return ans;

    }
};