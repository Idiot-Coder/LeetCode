//Program to Missing Number
//Created by Aryan
//Created on 24/09/2021

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            result ^= nums[i];
            result ^= i;
        }
        result ^= nums.size();
        return result;
    }
};