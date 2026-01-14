// Problem: Union of Two Sorted Arrays
// Platform: LeetCode / GFG
// Category: Arrays / Two Pointers
// Approach: Two Pointers (Optimized)
// Idea:
// Traverse both arrays simultaneously and add the smaller element.
// Avoid duplicates by checking the last inserted element.

class Solution {
public:
    vector<int> unionSortedArrays(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0;
        vector<int> result;

        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                if (result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
            } else {
                if (result.empty() || result.back() != b[j])
                    result.push_back(b[j]);
                j++;
            }
        }

        // Remaining elements of array a
        while (i < a.size()) {
            if (result.back() != a[i])
                result.push_back(a[i]);
            i++;
        }

        // Remaining elements of array b
        while (j < b.size()) {
            if (result.back() != b[j])
                result.push_back(b[j]);
            j++;
        }

        return result;
    }
};
