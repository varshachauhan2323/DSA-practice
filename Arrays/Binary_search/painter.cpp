/*
Platform: LeetCode
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high) {
            int mid = (low + high) / 2;
            int parts = 1, sum = 0;

            for (int n : nums) {
                if (sum + n > mid) {
                    parts++;
                    sum = 0;
                }
                sum += n;
            }

            if (parts <= k)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
