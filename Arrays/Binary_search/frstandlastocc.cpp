/*
 First and Last Occurrence in Sorted Array
Platform: LeetCode
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int low = 0, high = nums.size() - 1;

        // First occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) high = mid - 1;
            else low = mid + 1;
            if (nums[mid] == target) first = mid;
        }

        low = 0, high = nums.size() - 1;
        // Last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) low = mid + 1;
            else high = mid - 1;
            if (nums[mid] == target) last = mid;
        }

        return {first, last};
    }
};
