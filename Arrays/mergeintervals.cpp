// # Merge Intervals
// LeetCode

// Time Complexity: O(n log n)   // sorting intervals
// Space Complexity: O(n)        // for result array

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

        // sort intervals based on starting time
        sort(intervals.begin(), intervals.end());

        // start with first interval
        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            // if current interval overlaps with last merged interval
            if (intervals[i][0] <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            } 
            // no overlap
            else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};
