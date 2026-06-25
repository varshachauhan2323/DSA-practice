class Solution {
public:
    string convert(string s, int numRows) {
        int currrow=0;
        bool grow=true;
        string ans="";
        vector<string>rows(numRows);
        if(numRows==1||numRows>s.length()) return s;
        for(char c:s){
            rows[currrow]+=c;
            if(currrow==0){ grow=true;
            }
        
        else if(currrow==numRows-1){
            grow=false;
        }
        if(grow) currrow++;
        else currrow--;
    }
    for(string row:rows){
        ans+=row;
    }
    return ans;
    }
};