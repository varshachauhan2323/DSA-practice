// Problem: Intersection of Two Sorted Arrays
// Platform: LeetCode / GFG
// Category: Arrays / Two Pointers
// Approach: Two Pointers (Optimized)
// Idea:
// Traverse both arrays simultaneously.
// If elements are equal, add to result (avoid duplicates).
// Move the pointer of the smaller element otherwise.

class Solution {
public:
    vector<int> intersectionSortedArrays(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0;
        vector<int> result;

        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) {
                // Add only if it's not a duplicate
                if (result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return result;
    }
};
