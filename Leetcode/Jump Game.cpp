// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j = 0;
        if(nums[0] == 0 && nums.size() > 1) return false;
        for(int i=0; i<nums.size()-1; i++) {
            cout<<nums[i]<<" ";
            if(nums[i] == 0) {
                j = i-1;
                while(j >= 0) {
                    if(nums[j] > i-j) 
                        break;
                    else if(j == 0)
                        return false;
                    else 
                        j--;
                }
            }
        }
        return true;
    }
};
