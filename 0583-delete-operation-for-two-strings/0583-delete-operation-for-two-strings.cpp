class Solution {
public:
    int commonsubsequence(string text1,string text2){
        int n=text1.size();
        int m=text2.size();
        vector<int>prev(m+1,0);
        vector<int>curr(m+1,0);

        for(int i=0;i<=m;i++){
            prev[i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]) curr[j]=1+prev[j-1];
                else curr[j]=max(prev[j],curr[j-1]);
            }
            prev=curr;
        }
        return prev[m];
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int del=n-commonsubsequence(word1,word2);
        int insert=m-commonsubsequence(word1,word2);
        return del+insert;
    }
};