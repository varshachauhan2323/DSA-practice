//binary subarrays with sum equal to goal
//platform: leetcode
//time complexity: O(n)
//space complexity: O(1)
class Solution {
public:
    int atMost(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int l = 0, sum = 0, ans = 0;

        for(int r = 0; r < nums.size(); r++){
            sum += nums[r];
            while(sum > goal){
                sum -= nums[l++];
            }
            ans += (r - l + 1);
        }
        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};
