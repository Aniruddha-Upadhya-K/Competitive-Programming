// https://leetcode.com/problems/largest-3-same-digit-number-in-string

class Solution {
public:
    string largestGoodInteger(string num) {
        int n=-1, count = 1;
        for(int i=0; i<num.size()-2; i++) {
            if(num[i] - '0' > n) {
                while(count != 3) {
                    if(num[i] != num[i+count]) break;
                    count++;
                    if(count == 3) {
                        n = max(n, num[i] - '0');
                    }
                }
                count = 1;
            }
        }
        if(n == -1) {
            return "";
        } else {
            string res = to_string(n);
            return res + res + res;
        }
    }
};
