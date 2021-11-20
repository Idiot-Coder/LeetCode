//Program to Capacity To Ship Packages Within D Days
//Created by Aryan
//Created on 20/11/2021

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int left = 0, right = 0;
        for (int w: weights) {
            left = max(left, w);
            right += w;
        }
        while (left < right) {
            int mid = (left + right) / 2, requirement = 1, tillnow = 0;
            for (int w: weights) {
                if (tillnow + w > mid) {
                   requirement += 1;
                   tillnow = 0;
                }
                tillnow += w;
            }
            if (requirement > days) left = mid + 1;
            else right = mid;
        }
        return left; 
    }
};