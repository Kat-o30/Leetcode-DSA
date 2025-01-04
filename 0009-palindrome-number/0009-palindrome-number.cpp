class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            int digit = x % 10;          // Get the last digit
            reversedHalf = reversedHalf * 10 + digit; // Build reversed half
            x /= 10;                    // Remove the last digit
        }

        // Check if the number is a palindrome
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
