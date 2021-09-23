//Program to Minimum Moves to Equal Array Elements
//Created by Aryan
//Created on 23/09/2021

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = *min_element(nums.begin() , nums.end()) , moves = 0;
    for(int &i : nums)
        moves += i - mn;
    return moves;
    }
};