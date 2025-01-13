#include <string>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0; // Pointers for `name` and `typed`
        
        while (j < typed.size()) {
            if (i < name.size() && name[i] == typed[j]) {
                // Characters match, move both pointers forward
                i++;
                j++;
            } else if (j > 0 && typed[j] == typed[j - 1]) {
                // Current character in `typed` is a long press
                j++;
            } else {
                // Characters do not match and it's not a long press
                return false;
            }
        }
        
        // Check if we have processed all characters in `name`
        return i == name.size();
    }
};
