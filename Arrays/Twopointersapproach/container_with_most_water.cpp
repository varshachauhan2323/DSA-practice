/*
Problem: Container With Most Water
Pattern: Two Pointers
Difficulty: Medium
Link: https://leetcode.com/problems/container-with-most-water/

Approach:
- Use two pointers (left & right)
- Move the pointer with smaller height
- Track maximum area

Time Complexity: O(n)
Space Complexity: O(1)
*/
    class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0;
        int n=height.size();
        int end=n-1;
        int maxw=0;
        while(st<end){
            int width=end-st;
            int heights=min(height[st],height[end]);
            int currw=width*heights;
            maxw=max(maxw,currw);
            height[st]<height[end]?st++:end--;
        }
        return maxw;
    }
};