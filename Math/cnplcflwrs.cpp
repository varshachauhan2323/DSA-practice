class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int left=0;
        int right=0;
        int cnt=0;
        for(int i=0;i<flowerbed.size();i++){
            left=i==0?0:flowerbed[i-1];
            right=i==flowerbed.size()-1?0:flowerbed[i+1];
            if(flowerbed[i]==0&&left==0&&right==0){
                flowerbed[i]=1;
                cnt++;
                            if(cnt>=n) return true;

            }
        }
        return cnt>=n;
    }
};