class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            int start=i;
            while(i<s.length()&&s[i]!=' '){
                i++;
            }
            reverse(s.begin()+start,s.begin()+i);
        }
return s;
    }
    };