/*Platform:Leetcode
Problem: Peak Index in a Mountain Array
Approach:
- Use Binary Search on the array
- A mountain array strictly increases up to a peak, then strictly decreases
- At any mid index, compare arr[mid] with arr[mid + 1]

Logic:
1. If arr[mid] < arr[mid + 1]:
   - We are on the increasing slope
   - Peak lies to the right
   - Move left = mid + 1
2. Else:
   - We are on the decreasing slope or at the peak
   - Peak lies at mid or to the left
   - Move right = mid

Why it works:
- Mountain property guarantees a single peak
- Binary search narrows the search space based on slope direction

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1;
        int n=arr.size();
        int end=n-2;
        if(n==1) return arr[0];

        while(st<=end){
            int mid=st+(end-st)/2;
            if((arr[mid-1]<=arr[mid])&&(arr[mid]>=arr[mid+1])) return mid;
            else if(arr[mid-1]<arr[mid]) st=mid+1;
            else end=mid-1;

        }
        return -1;
    }
};