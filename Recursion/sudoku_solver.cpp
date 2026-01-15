// Problem: Sudoku Solver
// Platform: LeetCode
// Approach: Backtracking
// Idea:
// Try filling empty cells one by one.
// For each empty cell, try digits 1 to 9.
// Place a digit only if it is valid in row, column, and sub-grid.
// Backtrack if the placement leads to no solution.
class Solution {
public:
bool isvalid(char c ,vector<vector<char>>&boards,int rows,int col){
    for(int i=0;i<9;i++){
        if(boards[rows][i]==c) return false;
        if(boards[i][col]==c) return false;
        if(boards[3*(rows/3)+i/3][3*(col/3)+i%3]==c) return false;
    }
    return true;
}
    bool solve(vector<vector<char>>&boards){
        for(int i=0;i<boards.size();i++){
            for(int j=0;j<boards.size();j++){
                if(boards[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isvalid(c,boards,i,j)){
                            boards[i][j]=c;
                        
                        if(solve(boards)==true) return true;
                        else{
                            boards[i][j]='.';
                        }}
                    }
                    return false;
                }
            }
            }
            return true;
        }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        
    }
};