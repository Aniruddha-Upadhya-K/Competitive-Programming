// https://leetcode.com/problems/count-of-matches-in-tournament

class Solution {
public:
    int numberOfMatches(int n) {
       int matches = 0;
       if(n < 1) return matches;
       while(n!=1) {
           if(n%2 == 0) {
               n/=2;
               matches+=n;
           } else {
               matches += (n-1) / 2;
               n = (n-1)/2 + 1; 
           }
       }
       return matches;
    }
};
