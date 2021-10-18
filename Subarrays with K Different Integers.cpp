//Program to Subarrays with K Different Integers
//Created by Aryan
//Created on 18/10/21

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int sMin = 0, sMax = 0;
        unordered_map<int, int> win;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (win.size() < k || win.find(nums[i]) != win.end()) {
                win[nums[i]]++;
                while (win.size() == k && win[nums[sMax]] > 1) {
                    win[nums[sMax]]--;
                    sMax++;
                }
            }
            else {
                win[nums[i]]++;
                sMin = sMax + 1;
                while (win.size() >= k) {
                    if (win.size() == k && win[nums[sMax]] == 1) break;
                    win[nums[sMax]]--;
                    if (win[nums[sMax]] == 0) win.erase(nums[sMax]);
                    sMax++;
                }
            }
            if (win.size() == k) ans += sMax - sMin + 1;
        }
        return ans;
    }
};