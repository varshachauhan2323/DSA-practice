//Platform:Leetcode
// Use unordered_set to detect the repeated number
// Calculate actual sum of all elements in the grid
// Compute expected sum from 1 to n^2
// Missing = expectedSum + repeated − actualSum
// Time: O(n^2)
// Space: O(n^2) due to unordered_set (in best and average it is O(n))

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        unordered_set<int>s;
        int n=grid.size();
        int a;
        int actualsum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualsum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                   ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        int expsum=(pow(n,2)*(pow(n,2)+1))/2;
        int b=expsum+a-actualsum;
        ans.push_back(b);
        return ans;
    }
};