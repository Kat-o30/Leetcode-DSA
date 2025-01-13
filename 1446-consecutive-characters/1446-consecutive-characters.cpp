#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int maxPower = 1; // At least one character exists in the string
        int currentPower = 1; // Current streak of consecutive characters
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currentPower++; // Increment streak for consecutive characters
                maxPower = max(maxPower, currentPower); // Update max power if needed
            } else {
                currentPower = 1; // Reset streak for a new character
            }
        }
        
        return maxPower;
    }
};
