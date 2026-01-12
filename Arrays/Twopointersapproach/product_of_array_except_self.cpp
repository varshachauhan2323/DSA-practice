//Platform:Leetcode
//Product of array except self 
/*
Approach:
- Use prefix and suffix products
- Maintain an answer array
- Traverse from left to right for prefix
- Traverse from right to left for suffix
- Multiply prefix and suffix for each index

Key Insight:
Avoid division to handle zeros efficiently
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=1;i<n;i++){
            ans[i]=nums[i-1]*ans[i-1];
        }
        int suffix=1;
        for(int i=n-2;i>=0;i--){
            suffix*=nums[i+1];
            ans[i]*=suffix;

        }
        return ans;
    }
};