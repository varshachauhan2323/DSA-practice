// Problem: Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
//platform: LeetCode
//time complexity: O(n)
//space complexity: O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int maxLength = 0;
        int zeros = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            // Count zeros in current window
            if (nums[right] == 0) {
                zeros++;
            }
            
            // Shrink window if zeros exceed k
            while (zeros > k) {
                if (nums[left] == 0) {
                    zeros--;
                }
                left++;
            }
            
            // Update maximum length
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};

