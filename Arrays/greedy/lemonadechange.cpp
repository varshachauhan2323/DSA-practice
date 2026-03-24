class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int val:bills){
            if(val==5) five++;
            else if(val==10){
                if(five) {five--;ten++;}
                else return false;
            }
            else{
                if(five&&ten){
                    five--;
                    ten--;
                }
                else if(five>=3){
                    five-=3;
                }
                else return false;
            }
        }
    return true;}
};