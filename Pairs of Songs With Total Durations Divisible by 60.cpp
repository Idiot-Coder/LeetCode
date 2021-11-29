//Program to Pairs of Songs With Total Durations Divisible by 60
//Created by Aryan
//Created on 29/11/2021

class Solution {
 public:
  int numPairsDivisibleBy60(vector<int>& time) {
    int ans = 0;
    vector<int> count(60);

    for (int t : time) {
      t %= 60;
      ans += count[(60 - t) % 60];
      ++count[t];
    }

    return ans;
  }
};