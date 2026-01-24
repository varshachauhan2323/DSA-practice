/*
Question Name: Sort Characters by Frequency
Platform: LeetCode
Time Complexity: O(n log n)
Space Complexity: O(n)
*/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        vector<pair<char, int>> arr(freq.begin(), freq.end());
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        string ans = "";
        for (auto &p : arr) {
            ans.append(p.second, p.first);
        }
        return ans;
    }
};
