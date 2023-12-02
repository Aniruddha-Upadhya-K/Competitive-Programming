// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        sort(nums.begin(), nums.end());

        int count = 1, res = 1;
        for(int i=0; i<len-1; i++) {
            if(nums[i+1] == nums[i]) continue;
            cout<<nums[i];
            if(nums[i+1] - nums[i] == 1) {
                count ++;
            } else {
                res = count > res ? count : res;
                count = 1; 
            }
        }
        res = count > res ? count : res;

        return res;
    }
};
