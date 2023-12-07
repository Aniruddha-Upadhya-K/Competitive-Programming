// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    string largestOddNumber(string num) {
        int pos=-1;
        for(int i=num.size()-1; i>=0; i--) {
            int n = num[i] - '0';
            if(n%2 != 0) {
                pos = i;
                break;
            }
        }
        if(pos<0) return "";
        else {
            num.resize(pos+1);
            return num;
        }
    }
};
