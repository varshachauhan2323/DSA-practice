/*
 Binary Search to Find X in Sorted Array
Platform: LeetCode
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If target is found at mid
            if (nums[mid] == target) {
                return mid;
            }
            // If target is greater, ignore left half
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            // If target is smaller, ignore right half
            else {
                high = mid - 1;
            }
        }

        // Target not found
        return -1;
    }
};
