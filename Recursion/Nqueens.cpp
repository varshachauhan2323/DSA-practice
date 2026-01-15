// Problem: N-Queens
// Platform: LeetCode
// Approach: Backtracking
// Idea:
// Place one queen per row and try all columns.
// Check column and diagonal safety before placing.
// Backtrack by removing the queen after exploring the choice.
class Solution {
public:
    void queen(vector<vector<string>>&ans,vector<int>&left,vector<int>&lowerdiagonal,vector<int>&upperdiagonal,vector<string>&board,int col){
        if(col==board.size()){
            ans.push_back(board);
            return;
        }
        int n=board.size();
        for(int row=0;row<board.size();row++){
            if((left[row]==0)&&(lowerdiagonal[row+col]==0)&&(upperdiagonal[n-1+col-row]==0)){
                board[row][col]='Q';
                left[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[n-1+col-row]=1;
                queen(ans,left,lowerdiagonal,upperdiagonal,board,col+1);
                board[row][col]='.';
                 left[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[n-1+col-row]=0;


            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<int>left(n,0);
        vector<int>upperdiagonal(2*n-1,0);
        vector<int>lowerdiagonal(2*n-1,0);
vector<string> board(n, string(n, '.'));//imp
        queen(ans,left,lowerdiagonal,upperdiagonal,board,0);
        return ans;
    }
};