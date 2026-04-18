class Solution {
public:
    void solve(vector<int>&leftrow,vector<int>&lower,vector<int>&upper,vector<string>&board,vector<vector<string>>&ans,int col,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0&&lower[row+col]==0&&upper[n-1+col-row]==0){
                board[row][col]='Q';
                leftrow[row]=1;
                lower[row+col]=1;
                upper[n-1+col-row]=1;
                solve(leftrow,lower,upper,board,ans,col+1,n);
                board[row][col]='.';
                leftrow[row]=0;
                lower[row+col]=0;
                upper[n-1+col-row]=0;

            }
        }
    }
 

    int totalNQueens(int n) {
        vector<int>leftrow(n);
        vector<int>lower(2*n-1);
        vector<int>upper(2*n-1);
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        solve(leftrow,lower,upper,board,ans,0,n);
        return ans.size();
    }
};