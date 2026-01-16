// # Leaders in an Array
// GFG Problem

// Time Complexity: O(n)
// Space Complexity: O(n)   // for storing answer

class Solution {
public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> ans;
        int maxRight = arr[n - 1];

        // last element is always a leader
        ans.push_back(maxRight);

        // traverse from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxRight) {
                maxRight = arr[i];
                ans.push_back(maxRight);
            }
        }

        // reverse to maintain order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
