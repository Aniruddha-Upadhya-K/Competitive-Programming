// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters 

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> charSet, charCopy;
        int res = 0, len = 0;
        for(char i:chars) {
            charSet[i] ++;
        }
        for(string word:words) {
            charCopy = charSet;
            len = word.size();
            for(int i=0; i<len; i++) {
                if(charCopy[word[i]] == 0) break;
                charCopy[word[i]] --;
                if(i == len-1) {
                    res += len;
                }
            }
        }
        return res;
    }
};
