#include <string>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); ++i) {
            // Convert uppercase letter to lowercase by using the tolower() function
            s[i] = tolower(s[i]);
        }
        return s;
    }
};
