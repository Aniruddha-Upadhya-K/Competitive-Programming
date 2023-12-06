// https://leetcode.com/problems/calculate-money-in-leetcode-bank

class Solution {
public:
    int totalMoney(int n) {
        int weeks = n/7;
        int days = n%7;
        int res = 7 * weeks * (weeks+1)/2 + weeks * 21;
        res += (days * (2 * weeks + days + 1)) / 2;
        return res;  
    }
};
