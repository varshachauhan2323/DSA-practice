class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unplaced=0;
        vector<int>used(fruits.size(),0);
        for(int i=0;i<fruits.size();i++){
           bool placed=false;
           for(int j=0;j<fruits.size();j++){
            if(!used[j]&&fruits[i]<=baskets[j]){
                used[j]=1;
                placed=true;
                break;
            }
           }
           if(!placed) unplaced++;
        }
    return unplaced;
    
    }
};