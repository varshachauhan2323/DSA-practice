/*
Aggressive Cows
Platform: LeetCode
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool canPlace(vector<int>& stalls, int dist, int cows) {
        int count = 1, last = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - last >= dist) {
                count++;
                last = stalls[i];
            }
        }
        return count >= cows;
    }

    int maxDistance(vector<int>& stalls, int cows) {
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls.back() - stalls.front();

        while (low <= high) {
            int mid = (low + high) / 2;
            if (canPlace(stalls, mid, cows))
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
};
