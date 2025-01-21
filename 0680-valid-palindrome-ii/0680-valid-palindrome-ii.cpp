class Solution {
private:
    // Forward declaration of isPalindrome
    bool isPalindrome(string& s, int left, int right);

public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                // Try skipping either the left or right character
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
        }
        return true;
    }
};

// Define isPalindrome outside the class
bool Solution::isPalindrome(string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
