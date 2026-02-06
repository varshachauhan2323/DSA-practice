class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[left]=0;
                left++;
            }
            else{
                nums[right]=1;;
                right--;
            }
        }
        return nums;
    }
};