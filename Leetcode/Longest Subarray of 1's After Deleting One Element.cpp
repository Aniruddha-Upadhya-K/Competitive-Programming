// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int s1 = 0;
        int s2 = 0;
        int count = 0;
        int numZero = -1;
        for(int i:nums) {
            if(i == 0 && s1!=0) {
                numZero ++;
                if(numZero > 0) {
                    numZero = 0;
                    if(s1+s2 > count)
                        count = s1+s2;
                    if(s2 != 0) {
                        s1 = s2;
                        s2 = 0;
                    } else {
                        s1=0;s2=0;numZero = -1;
                    }
                }
            } else if(i!=0) {
                if(numZero == -1)
                s1 ++;
                else s2 ++;
            }
        }
        if(s1+s2 > count) count = s1+s2;
        if(count == nums.size())
            count --;
        return count;
    }
};
