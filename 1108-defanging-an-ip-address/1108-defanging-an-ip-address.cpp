#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string defanged = "";
        for (char c : address) {
            if (c == '.') {
                defanged += "[.]"; // Replace '.' with '[.]'
            } else {
                defanged += c; // Append the character as is
            }
        }
        return defanged;
    }
};
