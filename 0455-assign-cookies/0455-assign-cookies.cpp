class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int r=0;
        int m=g.size();
        int l=0;
        while(l<m&&r<s.size()){
            if(s[r]>=g[l]){
                l++;
            }
        r++;}
        return l;
    }
};