//Program to Jump Game
//Created by Aryan
//Created on 15/12/2021

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable = 0;
        for (int i = 0; i <= reachable && i < nums.size(); ++i) {
            reachable = max(reachable, i + nums[i]);
        }
        return reachable >= nums.size() - 1;
    }
};