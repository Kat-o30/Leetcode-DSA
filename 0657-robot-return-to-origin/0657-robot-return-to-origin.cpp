#include <string>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // Robot starts at the origin (0, 0)
        
        for (char move : moves) {
            if (move == 'U') y++; // Move up increases y-coordinate
            else if (move == 'D') y--; // Move down decreases y-coordinate
            else if (move == 'L') x--; // Move left decreases x-coordinate
            else if (move == 'R') x++; // Move right increases x-coordinate
        }
        
        // Robot returns to the origin if x == 0 and y == 0
        return x == 0 && y == 0;
    }
};
