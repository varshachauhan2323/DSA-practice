/*
 Implement Lower Bound
Platform: LeetCode
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int lowerBound(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = nums.size();  // default position if target is greater than all elements

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If mid element is greater than or equal to target,
            // it can be a potential answer
            if (nums[mid] >= target) {
                ans = mid;
                high = mid - 1;  // move left to find smaller index
            }
            // If mid element is smaller than target
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
