/*
Capacity to Ship Packages Within D Days
Platform: LeetCode
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = (low + high) / 2;
            int sum = 0, d = 1;

            for (int w : weights) {
                if (sum + w > mid) {
                    d++;
                    sum = 0;
                }
                sum += w;
            }

            if (d <= days)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
