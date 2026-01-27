//Letter Combinations of a Phone Number
//Platform: LeetCode
//TIME COMPLEXITY: O(4^n)
//SPACE COMPLEXITY: O(n)
class Solution {
public:
    void solve(vector<string>&ans,string digits,string curr,vector<string>&mp,int index){
        if(index==digits.length()){
            ans.push_back(curr);
            return;
        }
        
        int digit=digits[index]-'0';
        string letters=mp[digit];
        for(char ch:letters){
            solve(ans,digits,curr+ch,mp,index+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0) return ans;
        vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(ans,digits,"",mp,0);
        return ans;
    }
};