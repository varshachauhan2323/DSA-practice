/*
 Minimize Max Distance to Gas Station
Platform: LeetCode
Time Complexity: O(n log 1e6)
Space Complexity: O(1)
*/

class Solution {
public:
    int stationsNeeded(vector<int>& stations, double dist) {
        int cnt = 0;
        for (int i = 1; i < stations.size(); i++) {
            cnt += (stations[i] - stations[i - 1]) / dist;
        }
        return cnt;
    }

    double minmaxGasDist(vector<int>& stations, int k) {
        double low = 0, high = stations.back() - stations.front();

        while (high - low > 1e-6) {
            double mid = (low + high) / 2.0;
            if (stationsNeeded(stations, mid) <= k)
                high = mid;
            else
                low = mid;
        }
        return high;
    }
};
