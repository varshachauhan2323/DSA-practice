// Problem: Count Number of Nice Subarrays
//platform: LeetCode
//time complexity: O(n)
//space complexity: O(1)
class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int l = 0, odd = 0, ans = 0;
        for(int r = 0; r < nums.size(); r++){
            if(nums[r] & 1) odd++;
            while(odd > k){
                if(nums[l] & 1) odd--;
                l++;
            }
            ans += (r - l + 1);
        }
        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
