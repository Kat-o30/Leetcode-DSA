class Solution {
public:
    int romanToInt(string s) {
        // Map to store Roman numeral values
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;  // Total value
        int prevValue = 0;  // Previous numeral value

        // Iterate from the end of the string to the beginning
        for (int i = s.length() - 1; i >= 0; --i) {
            int currentValue = romanValues[s[i]];

            // If the current value is less than the previous value, subtract it
            if (currentValue < prevValue) {
                total -= currentValue;
            } else {
                // Otherwise, add it to the total
                total += currentValue;
            }

            // Update the previous value for the next iteration
            prevValue = currentValue;
        }

        return total;
    }
};
