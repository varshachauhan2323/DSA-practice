//Platform:LeetCode
//Single Element in a Sorted Array
// Use binary search and index parity
// Pairs are aligned before the single element, misaligned after it
// Time: O(log n), Space: O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int n=nums.size();
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(n==1) return nums[0];

            if((mid==0)&&(nums[0]!=nums[1])) return nums[0];
            if((mid==end)&&(nums[end]!=nums[end-1])) return nums[end];


            if((nums[mid-1]!=nums[mid])&&(nums[mid]!=nums[mid+1])) return nums[mid];
            else if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    end=mid-1;
                }
                else {
                    st=mid+1;
                }
            }
            else {
                if(nums[mid-1]==nums[mid]) st=mid+1;
                else end=mid-1;
            }
        }
        return -1;
    }
};