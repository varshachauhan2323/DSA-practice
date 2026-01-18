/*
 Count Occurrences in Sorted Array
Platform: LeetCode
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int countOccurrences(vector<int>& nums, int target) {
        int first = -1, last = -1;

        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) high = mid - 1;
            else low = mid + 1;
            if (nums[mid] == target) first = mid;
        }

        low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) low = mid + 1;
            else high = mid - 1;
            if (nums[mid] == target) last = mid;
        }

        if (first == -1) return 0;
        return last - first + 1;
    }
};
