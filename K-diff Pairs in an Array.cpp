//Program to K-diff Pairs in an Array
//Created by Aryan
//Created on 12/12/2021

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) {
            return 0;
        }
        unordered_set<int> result, lookup;
        for (const auto& num : nums) {
            if (lookup.count(num - k)) {
                result.emplace(num - k);
            }
            if (lookup.count(num + k)) {
                result.emplace(num);
            }
            lookup.emplace(num);
        }
        return result.size();
    }
};