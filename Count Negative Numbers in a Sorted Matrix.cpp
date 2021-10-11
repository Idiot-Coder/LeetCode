//Program to Count Negative Numbers in a Sorted Matrix
//Created by Aryan
//Created on 11/10/2021

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int n=grid.size(),m=grid[0].size(), row=0, column=m - 1,ans=0;
        while (row < n) {
            while (column >= 0 && grid[row][column] < 0) column--;
            ans += m - column - 1;
            row++;
        }
        return ans; 
    }
};