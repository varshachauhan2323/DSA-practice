class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int bestsum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int currsum=nums[i]+ nums[j]+nums[k];
                if(abs(target-currsum)<abs(target-bestsum)){
                    bestsum=currsum;
                }
                if(target<currsum){
                    k--;
                }
                else if(target>currsum){
                j++;
                }
                else{
                    return currsum;
                }
            }
        }
return bestsum;
    }
};