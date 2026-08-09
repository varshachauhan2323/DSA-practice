class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int j=0;
        int i=0;
        int n=prices.size();
        int m=discounts.size();
        double sum=0;
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        while(i<n){
            if(i<m){
             sum+=(double)(prices[i]*1LL*(100.0-discounts[i]))/100.0;
            }
            else{
                sum+=prices[i];
            }
            
            i++;
            
        }
        return sum ;
    }
};