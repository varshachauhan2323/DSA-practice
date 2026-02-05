class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pos;
        for(int i=0;i<n;i++){
            if(nums[i]>=0) pos.push_back(nums[i]);
        }
        if(pos.size()<=1) return nums;//edge case for empty and single element 
        k%=pos.size();
                if(k==0) return nums;

        reverse(pos.begin(),pos.begin()+k);
        reverse(pos.begin()+k,pos.end());
        reverse(pos.begin(),pos.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0) {
                nums[i]=pos[j];
                j++;
            }
        }
        return nums;
    }
};