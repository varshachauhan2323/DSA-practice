//Platform:Leetcode
// Maintain top, bottom, left, right boundaries
// Traverse right, down, left, up
// Shrink boundaries after each traversal
// Time: O(m × n)
// Space: O(1) (excluding output)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int strow=0;
        int endrow=matrix.size()-1;
        int stcol=0;
        int endcol=matrix[0].size()-1;
        vector<int>ans;
        while(strow<=endrow&&stcol<=endcol){
            //top
            for(int i=stcol;i<=endcol;i++){
                    ans.push_back(matrix[strow][i]);
            }
            //right
            for(int i=strow+1;i<=endrow;i++){
                    ans.push_back(matrix[i][endcol]);
            }
            //bottom 
             for(int i=endcol-1;i>=strow;i--){
                    if(strow==endrow) break;
                    ans.push_back(matrix[endrow][i]);
            }
            //left
             for(int i=endrow-1;i>=strow+1;i--){
                    if(stcol==endcol) break;
                    ans.push_back(matrix[i][stcol]);
            }
            strow++;
            endrow--;
            stcol++;
            endcol--;
        }
        return ans;
    }
};