class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int n = s.size();
        int i = n-1;
        while(i >= 0){
            if(s[i] != ' '){
                length += 1;
                i--;
            }
            
            if(s[i] == ' ' && length == 0){
                i--;
            }

            if(s[i] == ' ' && length != 0){
                break;
            }
        }
        return length;
    }
};