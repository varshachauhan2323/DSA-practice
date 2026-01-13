//Platform:Leetcode
//Subarray sum equals k 
// Use prefix sum
// Store frequency of prefix sums in hashmap
// Check if (currentSum - k) exists
// Time: O(n)
// Space: O(n)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int count =0;
        int prefixsum=0;
        int n=nums.size();
        mpp[0]=1;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int remove=prefixsum-k;
            count+=mpp[remove];
            mpp[prefixsum]++;

        }
        return count;
    }
};