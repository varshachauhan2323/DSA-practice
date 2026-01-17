// # Replace Elements with Greatest Element on Right Side
// LeetCode

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxRight = -1;   // last element ka replacement

        // traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];   // current value store
            arr[i] = maxRight;   // replace with max on right
            maxRight = max(maxRight, curr); // update max
        }

        return arr;
    }
};
