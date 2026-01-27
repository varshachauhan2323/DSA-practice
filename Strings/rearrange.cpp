//rearrange characters to form target string
//Platform: LeetCode
//Time Complexity: O(n+m) where n is length of s and m is length of target
//Space Complexity: O(1) as we are using fixed size arrays for frequency counts
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>freqs(26,0);
        int mini=INT_MAX;
        for(int i=0;i<s.length();i++){
            freqs[s[i]-'a']++;
        }
        vector<int>freqt(26,0);

        for(char c:target){
            freqt[c-'a']++;
        }

        for(int i=0;i<26;i++){
            if(freqt[i]>0){
             mini=min(mini,freqs[i]/freqt[i]);}
        }
        return mini;
    }
};