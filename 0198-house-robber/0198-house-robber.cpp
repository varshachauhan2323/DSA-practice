class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2=0;
        int n=nums.size();
        int prev=nums[0];
        for(int i=0;i<n;i++){
            int pick=nums[i];
            if(i>1) pick+=prev2;
            int notpick=prev;
            int curi=max(pick,notpick);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
};