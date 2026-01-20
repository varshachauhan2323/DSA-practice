/*
Find the Smallest Divisor Given a Threshold
Platform: LeetCode
Time Complexity: O(n log m)
Space Complexity: O(1)
*/

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = (low + high) / 2;
            int sum = 0;

            for (int n : nums)
                sum += (n + mid - 1) / mid;

            if (sum <= threshold)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
