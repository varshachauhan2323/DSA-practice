class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int a=nums[0];
        int ans=0;
        for(int j=k;j<nums.size();j++){
            a=max(a,nums[j-k]);
            ans=max(ans,nums[j]+a);
        }
        return ans;
    }
};