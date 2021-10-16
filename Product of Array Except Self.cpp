//Program to Product of Array Except Self
//Created by Aryan
//Created on 16/10/21

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        left[0] = nums[0]; // left sum of first number
        for (int i = 1; i < n; i ++) {
            left[i] = nums[i] * left[i - 1];
        }
        right[n - 1] = nums[n - 1]; // right sum of the last number
        for (int j = n - 2; j >= 0; j --) {
            right[j] = nums[j] * right[j + 1];
        }
        vector<int> r(n, 0);
        if (n > 1) {
            r[0] = right[1];
            r[n - 1] = left[n - 2];
        }
        for (int i = 1; i < n - 1; i ++) {
            // it equals to the left multiplies the right.
            r[i] = left[i - 1] * right[i + 1];
        }
        return r;
    }
};