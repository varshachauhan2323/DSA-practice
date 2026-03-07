class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxi=0;
        int cost=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>cost){
                profit+=prices[i]-cost;
                maxi=max(maxi,profit);
            }

            cost=prices[i];
        }
        return maxi;
    }
};