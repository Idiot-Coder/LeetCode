//Program to Minimum Limit of Balls in a Bag
//Created by Aryan
//Created on 21/11/2021

class Solution {
private:
    bool canDivide(vector<int>& nums, int op, long m) {
        int cnt = 0;
        for(auto it = upper_bound(nums.begin(), nums.end(), m); it != nums.end(); it++) {
            cnt += ceil(((double)*it / m) - 1);
        }

        return cnt <= op;
    }
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        long s = 1, e = INT_MAX, m, res = 0;
        sort(nums.begin(), nums.end());
        while(s <= e) {
            m = (e + s) / 2;
            if(canDivide(nums, maxOperations, m)) {
                res = m;
                e = m - 1;
            } else {
                s = m + 1;
            }
        }

        return res;
    }
};