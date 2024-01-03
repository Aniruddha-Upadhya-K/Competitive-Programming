// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res=0;
        int counts[] = {0, 0};
        int state = 0;
        for(int i=0; i<bank.size(); i++) {
            if(counts[0] != 0) state = 1;
            for(int j=0; j<bank[0].size(); j++) {
                if(bank[i][j] == '0') continue;
                counts[state]++;
            }
            if(counts[1] != 0) {
                res += counts[0] * counts[1];
                counts[0] = counts[1]; 
                counts[1] = 0;
            } 
        }
        return res;
    }
};
