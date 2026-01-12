/*
Platform:Leetcode
Problem: Search in Rotated Sorted Array

Approach:
- Use modified Binary Search
- At any index, one half of the array is always sorted
- Check which half is sorted:
    1. If left half is sorted:
        - If target lies in this range, move right = mid - 1
        - Else, move left = mid + 1
    2. Else (right half is sorted):
        - If target lies in this range, move left = mid + 1
        - Else, move right = mid - 1

Why it works:
- Rotation preserves sorted order in at least one half
- Binary Search logic is applied selectively on the sorted half

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target) return mid;
            else if(nums[st]<=nums[mid]){
                if(nums[st]<=target&&target<=nums[mid]){
                    end=mid-1;

                }else{
                    st=mid+1;
                }
            }
            else{
                if(nums[mid]<=target&&nums[end]>=target){
                    st=mid+1;
                }
                else end=mid-1;
                          }
        }
        return -1;
    }
};