class Solution {
public:
    string reverseByType(string s) {
        string letters="";
        string special="";
        for(char c:s){
            if(c>='a'&&c<='z'){
                letters+=c;
            } 
            else{
                special+=c;

            }
        }
        reverse(letters.begin(),letters.end());
        reverse(special.begin(),special.end());
        string res="";
        int i=0;
        int j=0;
        for(char c:s){
            if((c>='a'&&c<='z')&&i<letters.length()){
                res+=letters[i];
                i++;
            }
            else{
                if(j<special.length()){
                res+=special[j];
                j++;
            }}
        }
        return res;
    }
};