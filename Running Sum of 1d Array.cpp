//Program to Running Sum of 1d Array
//Created by Aryan
//Created on 19/09/2021

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for( int i=1 ; i<nums.size() ; i++ )
            nums[i] += nums[i-1] ;
        return nums ;
    }
};
