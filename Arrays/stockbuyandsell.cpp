//Platform:Leetcode
// Stock buy and sell
// TC:0(n) SC:0(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=prices[0];
        int maxp=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>cp){
                maxp=max(maxp,prices[i]-cp);
            }
            cp=min(cp,prices[i]);
        }
        return maxp;
    }
};