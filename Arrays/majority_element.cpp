// Platform:Leetcode
//Majority element using Moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums){
        int ans=nums[0];
        int freq=0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
                
            }
            if(ans==nums[i]){
                freq++;
                }
            else{
                freq--;
        
            }


        }return ans;
        int count =0;
        for(int val:nums){
            if(val==ans){
                count ++;
            }
            if(count>nums.size()/2){
                return ans;
            }else{
                return -1;
            }
        }

        
    }
};