/*
 Floor and Ceil in Sorted Array
Platform: LeetCode
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    pair<int,int> floorCeil(vector<int>& nums, int target) {
        int floor = -1, ceil = -1;
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] <= target) {
                floor = nums[mid];
                low = mid + 1;
            } else {
                ceil = nums[mid];
                high = mid - 1;
            }
        }
        return {floor, ceil};
    }
};
