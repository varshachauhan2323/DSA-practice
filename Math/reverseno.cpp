// Problem: Reverse Number
// Platform: LeetCode
// Category: Math
// Idea:
// Extract digits using modulo (%) and build the reversed number.
// Multiply the current reversed value by 10 before adding the digit.

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x = x / 10;

            // Check for overflow
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }
};
