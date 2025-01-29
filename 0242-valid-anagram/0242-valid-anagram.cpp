class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, char> anagram;
        for(auto ch: s){
            anagram[ch]++;
        }
        for(auto ch: t){
            anagram[ch]--;
        }
        for(auto &ch: anagram){
            if(ch.second != 0){
                return false;
            }
        }
        return true;
    }
};