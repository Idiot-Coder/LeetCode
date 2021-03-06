//Program to Combination Sum
//Created by Aryan
//Created on 2/12/2021

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ret;
        vector<int> path;
        findSum(candidates, target, path, ret, 0);
        return ret;
    }

    void findSum(vector<int>& candidates, int target, vector<int>& path, vector<vector<int>>& ret, int begin) {
        if (target == 0) {
            ret.push_back(path);
            return ;
        }

        for (int i = begin; i < candidates.size() && target >= candidates[i]; i++) {
            path.push_back(candidates[i]);
            findSum(candidates, target-candidates[i], path, ret, i);
            path.pop_back();
        }
    }
};