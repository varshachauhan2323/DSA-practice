class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int row=source[0];
        int col=source[1];
        int trow=target[0];
        int tcol=target[1];
        if(((row+col)%2==0)&&((trow+tcol)%2!=0)) return -1;
        if(((row+col)%2!=0)&&((trow+tcol)%2==0)) return -1;
        if(trow==row&&tcol==col) return 0;
        else if(abs(trow-row)==abs(tcol-col)) return 1;
        else return 2;
    }
};