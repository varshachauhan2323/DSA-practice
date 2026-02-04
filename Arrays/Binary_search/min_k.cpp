class Solution {
public:
    long long nonpositive(vector<int>&nums,int k){
        long long op=0;
        for(int i=0;i<nums.size();i++){
            op+=nums[i]%k==0?(nums[i]/k):(nums[i]/k)+1;


        }
        return op;
    }
    int minimumK(vector<int>& nums) {
        int low=1;
        int high=1e5;
        int ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long op=nonpositive(nums,mid);
            if(op<=mid*mid){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};