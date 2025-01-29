class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> charCount;
        for(char c: chars){
            charCount[c]++; 
        }

        int totalLength = 0;

        for(string word: words){ 
            unordered_map<char, int> wordCount;
            bool canBeFormed = true;

            for(char c: word){         
                wordCount[c]++;  
                if(wordCount[c] > charCount[c]){ 
                    canBeFormed = false;
                    break;
                }
            }
            if(canBeFormed){
                totalLength += word.length();
            }
        }
        return totalLength;
    }
};