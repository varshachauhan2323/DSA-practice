// Problem: Palindrome Partitioning
// Platform: LeetCode
// Approach: Backtracking + Recursion
// Idea:
// Generate all possible partitions of the string.
// Choose a substring only if it is a palindrome.
// Recursively partition the remaining string and backtrack.
class Solution {
public:
    bool palindrome(string s,int start,int end){
        int n=end;
        int i=start;
        while(i<=n){
            if(s[i]!=s[n]) return false;
            i++;
            n--;
        }
        return true;
    }
     void  partitioning(vector<vector<string>>&ans,vector<string>&ds,string &s,int ind){
        int n=s.length();
        if(ind==n){
            ans.push_back(ds);
            return ;
        }
        for(int i=ind;i<n;i++){
            if(palindrome(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                partitioning(ans,ds,s,i+1);
                ds.pop_back();

            }
        }
     }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        partitioning(ans,ds,s,0);
        return ans;
    }
};