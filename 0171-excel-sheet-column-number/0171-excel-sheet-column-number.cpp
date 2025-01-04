class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char ch: columnTitle){
           
            int num = ch - 'A' + 1;
            result = result*26 + num;
            
        }
        return result;
    }
};