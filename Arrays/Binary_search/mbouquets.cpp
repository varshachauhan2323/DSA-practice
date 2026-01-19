/*
Minimum Days to Make M Bouquets
Platform: LeetCode
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int cnt = 0, bouquets = 0;

        for (int b : bloomDay) {
            if (b <= day) {
                cnt++;
                if (cnt == k) {
                    bouquets++;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();
        if (n < (long long)m * k) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low < high) {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
