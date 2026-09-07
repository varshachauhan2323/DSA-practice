class Solution {
public:
    int climbStairs(int n) {
        int prev1=1;
        int prev0=1;
        int curr;
        for(int i=2;i<=n;i++){
            curr=prev1+prev0;
                        prev0=prev1;

            prev1=curr;
        }
        return prev1;
    }
};