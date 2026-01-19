/*
 Find Nth Root of a Number
Platform: LeetCode
Time Complexity: O(log m)
Space Complexity: O(1)
*/

class Solution {
public:
    int NthRoot(int n, int m) {
        int low = 1, high = m;

        while (low <= high) {
            int mid = (low + high) / 2;
            long long val = pow(mid, n);

            if (val == m) return mid;
            else if (val < m) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};
